#include <stdio.h>
#include <glcore.h>

int main(int argc, char const *argv[])
{
    float vertices[] = {
        -0.5f, -0.5f, 0.0f,
        0.5f, -0.5f, 0.0f,
        0.0f, 0.5f, 0.0f};
    
    GlCoreContext *gl_context = glcore_init();

    BufferConfig cfg = (BufferConfig) {
        .element_size = sizeof(float),
        .len = 9,
        .usage = StaticBuffer
    };
    
    glcore_alloc_buff(vertices, &cfg);

    glcore_destroy(gl_context);
    return 0;
}
