// 函数名称: sub_445cd0
// 虚拟地址: 0x445cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_445cd0(void* arg1)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t ecx = *(edi + 0x5c)
    
    if (ecx != 0x12 && ecx != 0x13)
        long double x87_r7_1 = float.t(1)
        long double temp0_1 = fconvert.t(*(edi + 0x78))
        x87_r7_1 - temp0_1
        arg1.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1) && (ecx == 4 || ecx == 3))
            void* eax = data_27e7a40
            int32_t esi_1 = *(eax + 0x74)
            
            if (esi_1 != 0xffffffff)
                arg1 = *sub_46b2b0(esi_1)
            else
                arg1 = eax | esi_1
            
            int32_t edi_1 = *(edi + 0x58)
            
            if (edi_1 != arg1)
                int32_t esi_2 = *(data_27e7a40 + 0x548)
                
                if (edi_1 != 0xffffffff)
                    arg1 = sub_46b360(edi_1)
                else
                    arg1 |= edi_1
                
                long double x87_r7_2 = fconvert.t(*(esi_2 + (arg1 << 2) + 0xbfb4))
                long double x87_r6_1 = float.t(0)
                x87_r6_1 - x87_r7_2
                arg1.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    arg1.b = 1
                    return arg1
    
    arg1.b = 0
    return arg1
}
