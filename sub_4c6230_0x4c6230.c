// 函数名称: sub_4c6230
// 虚拟地址: 0x4c6230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c6230(int32_t* arg1 @ edi)
{
    // 第一条实际指令: if (data_30785e8 s> 0)
    if (data_30785e8 s> 0)
        *arg1 = data_26a621c
        arg1[1] = data_26a6220
        int32_t eax
        eax.b = 1
        return 
    
    CURSORINFO pci
    pci.cbSize = 0x14
    pci.flags = 0
    pci.hCursor = 0
    pci.ptScreenPos.x = 0
    pci.ptScreenPos.y = 0
    GetCursorInfo(&pci)
    
    if ((pci.flags.b & 2) != 0)
        *arg1 = 0
        arg1[1] = 0
        int32_t eax_1
        eax_1.b = 0
        return 
    
    POINT point
    BOOL eax_2
    
    if (GetCursorPos(&point) != 0)
        ScreenToClient(data_30785e0, &point)
        float var_14
        eax_2 = sub_51ae00(&var_14, point.x, point.y)
        long double x87_r7_1 = float.t(0)
        *arg1 = *eax_2
        long double temp0_1 = fconvert.t(*arg1)
        x87_r7_1 - temp0_1
        arg1[1] = *(eax_2 + 4)
        eax_2.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax_2:1.b & 0x41) != 0)
            long double x87_r6_1 = fconvert.t(*arg1)
            void* ecx_4 = data_27e7fd0
            long double x87_r5_1 = float.t(*(ecx_4 + 0x14))
            x87_r5_1 - x87_r6_1
            eax_2.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (p_1)
                long double temp1_1 = fconvert.t(arg1[1])
                x87_r7_1 - temp1_1
                eax_2.w = (x87_r7_1 < temp1_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe
                
                if ((eax_2:1.b & 0x41) != 0)
                    long double x87_r7_2 = fconvert.t(arg1[1])
                    long double x87_r6_2 = float.t(*(ecx_4 + 0x18))
                    x87_r6_2 - x87_r7_2
                    eax_2.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
                    bool p_2 = unimplemented  {test ah, 0x41}
                    
                    if (p_2)
                        eax_2.b = 1
                        return 
    
    eax_2.b = 0
}
