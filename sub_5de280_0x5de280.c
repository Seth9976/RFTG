// 函数名称: sub_5de280
// 虚拟地址: 0x5de280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5de280(void* arg1 @ esi, HDC arg2)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    uint32_t edi = 0xffffffff
    int32_t eax_1 = DescribePixelFormat(arg2, 1, 0x28, nullptr)
    int32_t iPixelFormat = 1
    int32_t var_8 = 1
    
    if (eax_1 s< 1)
        return 0
    
    do
        PIXELFORMATDESCRIPTOR ppfd
        
        if (DescribePixelFormat(arg2, iPixelFormat, 0x28, &ppfd) != 0)
            int32_t eax_4 = *(arg1 + 4)
            
            if ((eax_4 & ppfd.dwFlags) == eax_4 && ppfd.iLayerType == *(arg1 + 0x1a))
                eax_4.b = ppfd.iPixelType
                
                if (eax_4.b == *(arg1 + 8))
                    eax_4.b = *(arg1 + 9)
                    
                    if (ppfd.cColorBits u>= eax_4.b)
                        eax_4.b = *(arg1 + 0xa)
                        
                        if (ppfd.cRedBits u>= eax_4.b)
                            eax_4.b = *(arg1 + 0xc)
                            
                            if (ppfd.cGreenBits u>= eax_4.b)
                                eax_4.b = *(arg1 + 0xe)
                                
                                if (ppfd.cBlueBits u>= eax_4.b)
                                    eax_4.b = *(arg1 + 0x10)
                                    
                                    if (ppfd.cAlphaBits u>= eax_4.b)
                                        eax_4.b = *(arg1 + 0x12)
                                        
                                        if (ppfd.cAccumBits u>= eax_4.b)
                                            eax_4.b = *(arg1 + 0x13)
                                            
                                            if (ppfd.cAccumRedBits u>= eax_4.b)
                                                eax_4.b = *(arg1 + 0x14)
                                                
                                                if (ppfd.cAccumGreenBits u>= eax_4.b)
                                                    eax_4.b = *(arg1 + 0x15)
                                                    
                                                    if (ppfd.cAccumBlueBits u>= eax_4.b)
                                                        char ebx_1 = *(arg1 + 0x16)
                                                        
                                                        if (ppfd.cAccumAlphaBits u>= ebx_1)
                                                            int32_t ecx_1
                                                            ecx_1.b = *(arg1 + 0x17)
                                                            
                                                            if (ppfd.cDepthBits u>= ecx_1.b)
                                                                eax_4.b = *(arg1 + 0x18)
                                                                uint8_t cStencilBits = ppfd.cStencilBits
                                                                
                                                                if (cStencilBits u>= eax_4.b)
                                                                    uint32_t eax_13 = zx.d(cStencilBits)
                                                                        - zx.d(eax_4.b) - zx.d(ecx_1.b)
                                                                        - zx.d(ebx_1) - zx.d(*(arg1 + 0x15))
                                                                        - zx.d(*(arg1 + 0x14))
                                                                        - zx.d(*(arg1 + 0x13))
                                                                        - zx.d(*(arg1 + 0x12))
                                                                    uint32_t eax_19 = eax_13
                                                                        - zx.d(*(arg1 + 0x10))
                                                                        - zx.d(*(arg1 + 0xe))
                                                                        - zx.d(*(arg1 + 0xc))
                                                                        - zx.d(*(arg1 + 0xa))
                                                                        - zx.d(*(arg1 + 9))
                                                                        + zx.d(ppfd.cDepthBits)
                                                                    uint32_t eax_27 = eax_19
                                                                        + zx.d(ppfd.cAccumAlphaBits)
                                                                        + zx.d(ppfd.cAccumBlueBits)
                                                                        + zx.d(ppfd.cAccumGreenBits)
                                                                        + zx.d(ppfd.cAccumRedBits)
                                                                        + zx.d(ppfd.cAccumBits)
                                                                        + zx.d(ppfd.cAlphaBits)
                                                                        + zx.d(ppfd.cBlueBits)
                                                                        + zx.d(ppfd.cGreenBits)
                                                                    uint32_t eax_29 = eax_27
                                                                        + zx.d(ppfd.cRedBits)
                                                                        + zx.d(ppfd.cColorBits)
                                                                    
                                                                    if (eax_29 u< edi)
                                                                        result = var_8
                                                                        edi = eax_29
        
        iPixelFormat = var_8 + 1
        var_8 = iPixelFormat
    while (iPixelFormat s<= eax_1)
    
    return result
}
