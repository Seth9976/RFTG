// 函数名称: sub_596470
// 虚拟地址: 0x596470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_596470(void* arg1, int32_t* arg2 @ esi, int16_t* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: if (arg2[0xda0] s< 0x10)
    if (arg2[0xda0] s< 0x10)
        sub_596320(arg2)
    
    int32_t eax = arg2[0xd9f]
    uint32_t edx = zx.d(*((eax u>> 0x17) + arg1))
    uint32_t ebx_1
    
    if (edx s>= 0xff)
        uint32_t i = eax u>> 0x10
        int32_t* edi_2 = arg1 + 0x62c
        int32_t edx_1 = 0xa
        
        if (i u< *edi_2)
        label_5964f8:
            
            if (edx_1 s<= arg2[0xda0])
                int32_t edi_1 = (eax u>> (0x20 - edx_1.b) & *((edx_1 << 2) + &data_8bc558))
                    + *(arg1 + (edx_1 << 2) + 0x64c)
                arg2[0xda0] -= edx_1
                arg2[0xd9f] = eax << edx_1.b
                ebx_1 = zx.d(*(edi_1 + arg1 + 0x400))
                goto label_59653d
        else
            do
                edi_2 = &edi_2[1]
                edx_1 += 1
            while (i u>= *edi_2)
            
            if (edx_1 != 0x11)
                goto label_5964f8
            
            arg2[0xda0] -= 0x10
    else
        uint32_t ecx_2 = zx.d(*(edx + arg1 + 0x500))
        int32_t edi = arg2[0xda0]
        
        if (ecx_2 s<= edi)
            arg2[0xda0] = edi - ecx_2
            arg2[0xd9f] = eax << ecx_2.b
            ebx_1 = zx.d(*(edx + arg1 + 0x400))
        label_59653d:
            
            if (ebx_1 s>= 0)
                sub_5abfc0(arg3, 0, 0x80)
                int32_t eax_5
                
                if (ebx_1 == 0)
                    eax_5 = 0
                else
                    if (arg2[0xda0] s< ebx_1)
                        sub_596320(arg2)
                    
                    int32_t eax_4 = rol.d(arg2[0xd9f], ebx_1.b)
                    arg2[0xd9f] = not.d(*((ebx_1 << 2) + &data_8bc558)) & eax_4
                    eax_5 = eax_4 & *((ebx_1 << 2) + &data_8bc558)
                    arg2[0xda0] -= ebx_1
                    
                    if (eax_5 u< 1 << (ebx_1.b - 1))
                        eax_5 = eax_5 - (1 << ebx_1.b) + 1
                
                int32_t edx_5 = arg5 * 7
                int32_t ecx_15 = arg2[edx_5 * 2 + 0xd6d] + eax_5
                arg2[edx_5 * 2 + 0xd6d] = ecx_15
                *arg3 = ecx_15.w
                void* var_8_1 = 1
                
                while (true)
                    if (arg2[0xda0] s< 0x10)
                        sub_596320(arg2)
                    
                    int32_t edx_7 = arg2[0xd9f]
                    uint32_t eax_8 = zx.d(*((edx_7 u>> 0x17) + arg4))
                    uint32_t eax_11
                    
                    if (eax_8 s>= 0xff)
                        uint32_t i_1 = edx_7 u>> 0x10
                        int32_t* edi_7 = arg4 + 0x62c
                        int32_t eax_12 = 0xa
                        
                        if (i_1 u>= *edi_7)
                            do
                                edi_7 = &edi_7[1]
                                eax_12 += 1
                            while (i_1 u>= *edi_7)
                            
                            if (eax_12 == 0x11)
                                break
                        
                        if (eax_12 s> arg2[0xda0])
                            goto label_596752
                        
                        int32_t edi_11 = (edx_7 u>> (0x20 - eax_12.b) & *((eax_12 << 2) + &data_8bc558))
                            + *(arg4 + (eax_12 << 2) + 0x64c)
                        arg2[0xda0] -= eax_12
                        arg2[0xd9f] = edx_7 << eax_12.b
                        eax_11 = zx.d(*(edi_11 + arg4 + 0x400))
                    else
                        uint32_t ecx_18 = zx.d(*(eax_8 + arg4 + 0x500))
                        int32_t eax_9 = arg2[0xda0]
                        
                        if (ecx_18 s> eax_9)
                            goto label_596752
                        
                        arg2[0xda0] = eax_9 - ecx_18
                        arg2[0xd9f] = edx_7 << ecx_18.b
                        eax_11 = zx.d(*(eax_8 + arg4 + 0x400))
                    
                    if (eax_11 s< 0)
                        goto label_596752
                    
                    int32_t ebx_4 = eax_11 & 0xf
                    
                    if (ebx_4 == 0)
                        if (eax_11 == 0xf0)
                            var_8_1 += 0x10
                        label_596735:
                            
                            if (var_8_1 s< 0x40)
                                continue
                        
                        return 1
                    
                    void* var_8_2 = var_8_1 + (eax_11 s>> 4)
                    
                    if (arg2[0xda0] s< ebx_4)
                        sub_596320(arg2)
                    
                    int32_t eax_15 = rol.d(arg2[0xd9f], ebx_4.b)
                    arg2[0xd9f] = not.d(*((ebx_4 << 2) + &data_8bc558)) & eax_15
                    int32_t eax_16 = eax_15 & *((ebx_4 << 2) + &data_8bc558)
                    arg2[0xda0] -= ebx_4
                    
                    if (eax_16 u< 1 << (ebx_4.b - 1))
                        eax_16 = eax_16 - (1 << ebx_4.b) + 1
                    
                    arg3[zx.d(*(var_8_2 + 0x8bc5b0))] = eax_16.w
                    var_8_1 = var_8_2 + 1
                    goto label_596735
                
                arg2[0xda0] -= 0x10
    label_596752:
    data_273ac1c = "bad huffman code"
    return 0
}
