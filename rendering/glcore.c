#include <GL/glew.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL2/SDL.h>

#include "include/glcore.h"

typedef struct GlCoreContext
{
} GlCoreContext;

GlCoreContext *glcore_init()
{
    GlCoreContext *ctx = malloc(sizeof(GlCoreContext));

    SDL_Init(SDL_INIT_VIDEO);

    glewExperimental = GL_TRUE;
    const GLenum err = glewInit();
    if (err != GLEW_OK)
    {
        printf("GLEW ERROR: %s\n", glewGetErrorString(err));
        return NULL;
    }

    return ctx;
}

GlCoreBuffer glcore_alloc_buff(void *data, BufferConfig *cfg)
{
    GlCoreBuffer buff;

    glGenBuffers(1, &buff);
    glBindBuffer(GL_ARRAY_BUFFER, buff);
    glBufferData(GL_ARRAY_BUFFER, cfg->element_size * cfg->len, data, cfg->usage);

    return buff;
}

int glcore_destroy(GlCoreContext *ctx)
{
    free(ctx);
    return 0;
}