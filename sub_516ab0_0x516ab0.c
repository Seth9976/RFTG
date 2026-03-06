// 函数名称: sub_516ab0
// 虚拟地址: 0x516ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_516ab0(void* arg1)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x2c)
    void* eax = *(arg1 + 0x2c)
    
    if (eax == 0)
        return 
    
    int32_t* i = *(eax + 4)
    
    if (i == 0)
        return 
    
    long double x87_r7_1 = float.t(0)
    
    do
        void* edx_1 = *i
        long double temp0_1 = fconvert.t(*(edx_1 + 0x18))
        x87_r7_1 - temp0_1
        i = i[1]
        eax.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            eax = *(edx_1 + 0x20)
            
            if (eax != 2 && eax != 4)
                return 
    while (i != 0)
}
