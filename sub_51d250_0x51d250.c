// 函数名称: sub_51d250
// 虚拟地址: 0x51d250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_51d250()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_30786fc
    int32_t i_1 = 0
    int32_t i = 0
    int16_t top
    
    if (*(edx + 0x5e20684) s> 0)
        long double x87_r7_1 = float.t(0)
        void* eax_1 = edx + 0x5e01290
        
        do
            *(eax_1 - 4) = fconvert.s(x87_r7_1)
            *(eax_1 + 4) = 0
            *eax_1 = fconvert.s(x87_r7_1)
            *(eax_1 + 8) = fconvert.s(x87_r7_1)
            
            if (*(edx + 0x5e206b0) == 0 || *(edx + 0x5e206b4) == i)
                *(eax_1 + 0xc) = 1
            else
                *(eax_1 + 0xc) = 0
            
            i += 1
            eax_1 += 0x1c
        while (i s< *(edx + 0x5e20684))
        
        top = 0
    
    int32_t ebx = 0
    *(edx + 0x5e20688) = 0
    int32_t var_8_1 = 0
    
    do
        if (*(edx + 0x5e2068c) == 0 || *(edx + 0x5e01280) != ebx)
            sub_51cae0(ebx)
            top -= 1
            unimplemented  {call 0x51cae0}
            edx = data_30786fc
            int32_t j = 0
            
            if (*(edx + 0x5e20684) s> 0)
                void* eax_2 = edx + 0x5e01290
                void* ecx_1 = i_1 + edx + 0x24a010
                
                do
                    *(eax_2 + 4) += *(ecx_1 + 4)
                    unimplemented  {fld st0, dword [ecx-0x4]}
                    unimplemented  {fadd dword [eax-0x4]}
                    j += 1
                    eax_2 += 0x1c
                    ecx_1 += 0x10
                    *(eax_2 - 0x20) = fconvert.s(unimplemented  {fstp dword [eax-0x20], st0})
                    unimplemented  {fstp dword [eax-0x20], st0}
                    unimplemented  {fld st0, dword [eax-0x1c]}
                    unimplemented  {fadd dword [ecx-0x10]}
                    *(eax_2 - 0x1c) = fconvert.s(unimplemented  {fstp dword [eax-0x1c], st0})
                    unimplemented  {fstp dword [eax-0x1c], st0}
                    unimplemented  {fld st0, dword [ecx-0x8]}
                    unimplemented  {fadd dword [eax-0x14]}
                    *(eax_2 - 0x14) = fconvert.s(unimplemented  {fstp dword [eax-0x14], st0})
                    unimplemented  {fstp dword [eax-0x14], st0}
                while (j s< *(edx + 0x5e20684))
                
                ebx = var_8_1
            
            *(edx + 0x5e20688) += 1
        
        ebx += 1
        i_1 += 0x259a10
        var_8_1 = ebx
    while (i_1 s< 0x5e01280)
    
    if (*(edx + 0x5e206b0) != 0)
        for (int32_t i_2 = 0; i_2 s< 0x28; i_2 += 1)
            sub_51ceb0(i_2)
        
        edx = data_30786fc
    
    int32_t i_3 = 0
    int32_t esi_1 = 0
    
    if (*(edx + 0x5e20684) s> 0)
        void* edi = edx + 0x5e1c804
        void* ecx_2 = edx + 0x5e0129c
        
        do
            if (*(ecx_2 - 8) != 0 && *ecx_2 != 0)
                *edi = i_3
                esi_1 += 1
                edi += 4
            
            i_3 += 1
            ecx_2 += 0x1c
        while (i_3 s< *(edx + 0x5e20684))
    
    sub_4641a0(edx + 0x5e1c804, edx + (esi_1 << 2) + 0x5e1c804, 
        (edx + (esi_1 << 2) + 0x5e1c804 - (edx + 0x5e1c804)) s>> 2, sub_51d0a0)
    void* result = data_30786fc
    *(result + 0x5e206ac) = esi_1
    
    if (*(result + 0x5e2069c) s>= esi_1)
        *(result + 0x5e2069c) = esi_1 - 1
    
    return result
}
