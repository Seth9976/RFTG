// 函数名称: sub_544d40
// 虚拟地址: 0x544d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_544d40(HDC arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* edx = data_27e7fd0
    PIXELFORMATDESCRIPTOR ppfd
    __builtin_memset(&ppfd, 0, 0x28)
    ppfd.nSize = 0x28
    char eax_2 = *(edx + 0x20)
    char temp0 = eax_2
    eax_2 = neg.b(eax_2)
    ppfd.nVersion = 1
    ppfd.dwFlags = 0x1025
    ppfd.iPixelType = 0
    ppfd.cColorBits = 0x20
    ppfd.cDepthBits = sbb.b(eax_2, eax_2, temp0 != 0) & 0x10
    int32_t format = ChoosePixelFormat(arg1, &ppfd)
    
    if ((ppfd.dwFlags & 0x1000) == 0)
        sub_4c5870("pfd.dwFlags & PFD_GENERIC_ACCELERATED", &data_83f3d3, "OpenGLGraphics.cpp", 0x466, 
            "OpenGLWin32SetPixelFormat")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_5 = *(data_27e7fd0 + 0x1c)
    
    if (eax_5 != 0)
        uint32_t cDepthBits = zx.d(ppfd.cDepthBits)
        long double x87_r7_1 = float.t(0)
        float var_a0 = fconvert.s(x87_r7_1)
        float var_9c_1 = fconvert.s(x87_r7_1)
        int32_t var_18_1 = eax_5
        uint32_t cDepthBits_1 = cDepthBits
        int32_t var_64
        __builtin_memcpy(&var_64, 
            "\x01\x20\x00\x00\x01\x00\x00\x00\x10\x20\x00\x00\x01\x00\x00\x00\x03\x20\x00\x00\x27\x20\x00\x"
        "00\x14\x20\x00\x00\x18\x00\x00\x00\x1b\x20\x00\x00\x08\x00\x00\x00\x22\x20\x00\x00", 
            0x2c)
        int32_t var_34_1 = 0x2023
        int32_t var_30_1 = 0
        int32_t var_2c
        __builtin_memcpy(&var_2c, 
            "\x11\x20\x00\x00\x01\x00\x00\x00\x41\x20\x00\x00\x01\x00\x00\x00\x42\x20\x00\x00", 0x14)
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_98
        int32_t format_1
        
        if (data_307b40c(arg1, &var_64, &var_a0, 1, &format_1, &var_98) != 0 && var_98 u>= 1)
            format = format_1
    
    BOOL result = SetPixelFormat(arg1, format, &ppfd)
    
    if (result != 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return result
    
    sub_4c5870("result", &data_83f3d3, "OpenGLGraphics.cpp", 0x489, "OpenGLWin32SetPixelFormat")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
