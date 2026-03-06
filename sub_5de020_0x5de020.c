// 函数名称: sub_5de020
// 虚拟地址: 0x5de020
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de020(void* arg1, char* arg2)
{
    // 第一条实际指令: char const* const edi = arg2
    char const* const edi = arg2
    
    if (edi == 0)
        edi = sub_5d2340("SDL_OPENGL_LIBRARY")
        
        if (edi == 0)
            edi = "OPENGL32.DLL"
    
    HMODULE eax_2 = sub_5def10(edi)
    *(arg1 + 0x260) = eax_2
    
    if (eax_2 == 0)
        return 0xffffffff
    
    sub_5cd270(arg1 + 0x160, edi, 0x100)
    int32_t var_1c = 0x2c
    int32_t var_20 = 1
    int32_t eax_5 = sub_5d0ad0()
    *(arg1 + 0x278) = eax_5
    
    if (eax_5 == 0)
        sub_5cd050(eax_5)
        return 0xffffffff
    
    HMODULE edi_1 = *(arg1 + 0x260)
    *(*(arg1 + 0x278) + 8) = sub_5defa0(edi_1, "wglGetProcAddress")
    *(*(arg1 + 0x278) + 0xc) = sub_5defa0(edi_1, "wglCreateContext")
    *(*(arg1 + 0x278) + 0x10) = sub_5defa0(edi_1, "wglDeleteContext")
    *(*(arg1 + 0x278) + 0x14) = sub_5defa0(edi_1, "wglMakeCurrent")
    *(*(arg1 + 0x278) + 0x18) = sub_5defa0(edi_1, "wglShareLists")
    void* esi_1 = *(arg1 + 0x278)
    
    if (*(esi_1 + 8) != 0 && *(esi_1 + 0xc) != 0 && *(esi_1 + 0x10) != 0 && *(esi_1 + 0x14) != 0)
        return 0
    
    sub_5cce60("Could not retrieve OpenGL functions")
    return 0xffffffff
}
