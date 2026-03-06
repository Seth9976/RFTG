// 函数名称: sub_5de4c0
// 虚拟地址: 0x5de4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5de4c0(void* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    char* edx
    eax_1, edx = (*(*(arg1 + 0x278) + 8))("wglGetExtensionsStringARB")
    void* edi
    
    if (eax_1 == 0)
        edi = nullptr
    else
        void* eax_2
        eax_2, edx = eax_1(arg2)
        edi = eax_2
    
    **(arg1 + 0x278) = 0
    char const* const var_c_2 = "WGL_ARB_pixel_format"
    int32_t eax_5
    char* edx_2
    eax_5, edx_2 = sub_5de440(edi, edx)
    
    if (eax_5 != 0)
        *(*(arg1 + 0x278) + 0x1c) = sub_5de140(arg1, "wglChoosePixelFormatARB")
        int32_t eax_7 = sub_5de140(arg1, "wglGetPixelFormatAttribivARB")
        edx_2 = *(arg1 + 0x278)
        *(edx_2 + 0x20) = eax_7
        int32_t* eax_8 = *(arg1 + 0x278)
        
        if (eax_8[7] != 0 && eax_8[8] != 0)
            *eax_8 = 1
    
    char const* const var_c_3 = "WGL_EXT_swap_control"
    *(*(arg1 + 0x278) + 4) = 0
    void* result
    
    if (sub_5de440(edi, edx_2) == 0)
        result = *(arg1 + 0x278)
        *(result + 0x24) = 0
        *(*(arg1 + 0x278) + 0x28) = 0
    else
        *(*(arg1 + 0x278) + 0x24) = sub_5de140(arg1, "wglSwapIntervalEXT")
        int32_t eax_12
        char* edx_4
        eax_12, edx_4 = sub_5de140(arg1, "wglGetSwapIntervalEXT")
        *(*(arg1 + 0x278) + 0x28) = eax_12
        char const* const var_1c_1 = "WGL_EXT_swap_control_tear"
        result = sub_5de440(edi, edx_4)
        
        if (result != 0)
            *(*(arg1 + 0x278) + 4) = 1
    
    return result
}
