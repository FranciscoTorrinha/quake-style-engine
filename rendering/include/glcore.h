#pragma once

#include <GL/glew.h>

typedef enum
{
    StreamBuffer = GL_STREAM_DRAW,
    StaticBuffer = GL_STATIC_DRAW,
    DynamicBuffer = GL_DYNAMIC_DRAW,

} BufferUsage;

typedef struct
{
    size_t element_size;
    size_t len;
    BufferUsage usage;
} BufferConfig;

typedef struct GlCoreContext GlCoreContext;
typedef GLuint GlCoreBuffer;

GlCoreContext *glcore_init();

GlCoreBuffer glcore_alloc_buff(void *data, BufferConfig *cfg);

int glcore_destroy(GlCoreContext *ctx);