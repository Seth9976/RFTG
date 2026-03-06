// 函数名称: sub_6365b0
// 虚拟地址: 0x6365b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6365b0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint8_t arg5, uint8_t arg6, uint8_t arg7, char arg8)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t result = 0
    
    if (esi == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    void* edi = *(esi + 4)
    int32_t ebx
    ebx.b = *(edi + 8)
    
    if (ebx.b u< 8)
        sub_5cce60("SDL_BlendPoints(): Unsupported surface format")
        return 0xffffffff
    
    if (arg4 == 1 || arg4 == 2)
        uint32_t ecx_1 = zx.d(arg8)
        arg5 = (zx.d(arg5) * ecx_1 u/ 0xff).b
        arg6 = (zx.d(arg6) * ecx_1 u/ 0xff).b
        arg7 = (zx.d(arg7) * ecx_1 u/ 0xff).b
    
    uint32_t eax_4 = zx.d(ebx.b)
    int32_t (* ebx_1)(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char arg5, char arg6, 
        char arg7, char arg8)
    
    if (eax_4 != 0xf)
        if (eax_4 == 0x10)
            if (*(edi + 0xc) != 0xf800)
                goto label_636697
            
            ebx_1 = sub_635420
            goto label_63668f
        
        if (eax_4 != 0x20 || *(edi + 0xc) != 0xff0000)
            goto label_636697
        
        if (*(edi + 0x18) != eax_4 - 0x20)
            ebx_1 = sub_635810
        else
            ebx_1 = sub_635680
        
        goto label_63668f
    
    if (*(edi + 0xc) != 0x7c00)
    label_636697:
        ebx_1 = sub_6359d0
        
        if (*(edi + 0x18) != 0)
            ebx_1 = sub_636020
    else
        ebx_1 = sub_6351c0
    label_63668f:
        
        if (ebx_1 == 0)
            goto label_636697
    
    void* edx_13 = *(esi + 0x24)
    void* ecx_2 = *(esi + 0x2c) + edx_13 - 1
    int32_t eax_9 = *(esi + 0x28)
    int32_t edi_1 = 0
    int32_t eax_10 = *(esi + 0x30) + eax_9 - 1
    arg1 = edx_13
    
    if (arg3 s> 0)
        while (true)
            int32_t eax_11 = *(arg2 + (edi_1 << 3))
            int32_t ecx_5 = *(arg2 + (edi_1 << 3) + 4)
            
            if (eax_11 s>= edx_13 && eax_11 s<= ecx_2 && ecx_5 s>= eax_9 && ecx_5 s<= eax_10)
                result = ebx_1(esi, eax_11, ecx_5, arg4, arg5.d, arg6.d, arg7.d, arg8.d)
            
            edi_1 += 1
            
            if (edi_1 s>= arg3)
                break
            
            edx_13 = arg1
    
    return result
}
