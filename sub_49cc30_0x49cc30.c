// 函数名称: sub_49cc30
// 虚拟地址: 0x49cc30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_49cc30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx = arg4
    int32_t ebx = arg4
    char* ecx = arg1 + arg2 * 0x14 + 0x464
    int32_t result
    result.b = *ecx
    
    if (result.b != 0xff)
        int16_t* edi_2 = sx.d(result.b) * 0xb4 + arg1 + 0x20 + (sx.d(ecx[1]) << 1) + 0x20
        int32_t eax_3 = sx.d(*edi_2)
        
        if (eax_3 != arg2)
            int16_t* edi_4 = arg1 + ((eax_3 * 5 + 0x11d) << 2)
            
            while (sx.d(*(arg1 + ((eax_3 * 5 + 0x11d) << 2))) != arg2)
                eax_3 = sx.d(*edi_4)
                
                if (eax_3 s< 0)
                    sub_49b2a0()
                    noreturn
                
                edi_4 = arg1 + ((eax_3 * 5 + 0x11d) << 2)
            
            edi_4.w = *(ecx + 0x10)
            ebx = arg4
            *(arg1 + ((eax_3 * 5 + 0x11d) << 2)) = edi_4.w
        else
            eax_3.w = *(ecx + 0x10)
            *edi_2 = eax_3.w
        
        result = 0xffffffff
        *(ecx + 0x10) = 0xffff
    
    if (arg3 != 0xffffffff)
        result.w = *(arg3 * 0xb4 + arg1 + 0x20 + (ebx << 1) + 0x20)
        *(ecx + 0x10) = result.w
        *(arg3 * 0xb4 + arg1 + 0x20 + (ebx << 1) + 0x20) = arg2.w
    
    arg2.b = arg3.b
    ecx[1] = ebx.b
    *ecx = arg2.b
    return result
}
