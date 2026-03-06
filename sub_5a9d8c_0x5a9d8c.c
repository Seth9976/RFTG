// 函数名称: sub_5a9d8c
// 虚拟地址: 0x5a9d8c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a9d8c(double arg1, int16_t arg2)
{
    // 第一条实际指令: int16_t edx = arg2 & 0x7ff0
    int16_t edx = arg2 & 0x7ff0
    
    if (edx == 0x7ff0)
        int32_t eax = sub_5b44a9(0x7ff0, 0x7ff0)
        
        if (eax == 1)
            return 0x200
        
        if (eax == 2)
            return 4
        
        if (eax == 3)
            return 2
        
        return 1
    
    int32_t ecx_2 = zx.d(arg2) & 0x8000
    
    if (edx == 0 && ((arg1:4.d & 0xfffff) != 0 || arg1.d != 0))
        int32_t eax_8 = neg.d(ecx_2)
        return (sbb.d(eax_8, eax_8, ecx_2 != 0) & 0xffffff90) + 0x80
    
    float.t(0) - fconvert.t(arg1)
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t eax_17 = neg.d(ecx_2)
        return (sbb.d(eax_17, eax_17, ecx_2 != 0) & 0xffffff08) + 0x100
    
    int32_t eax_13 = neg.d(ecx_2)
    return (sbb.d(eax_13, eax_13, ecx_2 != 0) & 0xffffffe0) + 0x40
}
