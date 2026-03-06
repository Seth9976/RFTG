// 函数名称: sub_680e90
// 虚拟地址: 0x680e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_680e90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t (** eax_1)(void* arg1) = (*esi[1])(esi, 1, 0xa0)
    esi[0x71] = eax_1
    *eax_1 = sub_6809e0
    eax_1[1] = sub_680a00
    eax_1[2] = 0
    
    if (esi[0x4b] != 0)
        *(*esi + 0x14) = 0x19
        (**esi)(esi)
    
    int32_t var_8_1
    
    if (esi[0x13] != 0)
        var_8_1 = 1
    
    if (esi[0x13] == 0 || esi[0x4f] s<= 1)
        var_8_1 = 0
    
    void* result = esi[0x36]
    void* result_1 = nullptr
    
    if (esi[9] s> 0)
        int32_t* eax_3 = result + 0x24
        arg1 = eax_3
        void* ebx_1 = &eax_1[0xd]
        
        while (true)
            int32_t ecx_2 = *eax_3
            int32_t edi_1 = esi[0x4f]
            int32_t temp0_1 = divs.dp.d(sx.q(eax_3[-7] * ecx_2), edi_1)
            int32_t temp0_2 = divs.dp.d(sx.q(arg1[-6] * ecx_2), edi_1)
            int32_t edx_5 = esi[0x4e]
            int32_t eax_12 = esi[0x4d]
            *(ebx_1 + 0x30) = temp0_2
            
            if (arg1[3] == 0)
                *ebx_1 = sub_680ae0
            else if (temp0_1 != eax_12 || temp0_2 != edx_5)
                int32_t edi_4 = temp0_1 * 2
                
                if (edi_4 != eax_12)
                label_680fe2:
                    int32_t eax_15
                    int32_t edx_7
                    edx_7:eax_15 = sx.q(eax_12)
                    int32_t eax_18
                    int32_t edx_9
                    
                    if (mods.dp.d(edx_7:eax_15, temp0_1) == 0)
                        edx_9:eax_18 = sx.q(edx_5)
                    
                    if (mods.dp.d(edx_7:eax_15, temp0_1) != 0 || mods.dp.d(edx_9:eax_18, temp0_2) != 0)
                        *(*esi + 0x14) = 0x26
                        (**esi)(esi)
                    else
                        int32_t edx_10
                        edx_10.b = (divs.dp.d(edx_7:eax_15, temp0_1)).b
                        *ebx_1 = sub_680af0
                        *(result_1 + eax_1 + 0x8c) = edx_10.b
                        *(result_1 + eax_1 + 0x96) = (divs.dp.d(edx_9:eax_18, temp0_2)).b
                else if (temp0_2 != edx_5)
                    if (edi_4 != eax_12 || temp0_2 * 2 != edx_5)
                        goto label_680fe2
                    
                    if (var_8_1 == 0 || arg1[1] u<= 2)
                        *ebx_1 = sub_680c20
                    else
                        *ebx_1 = sub_680d60
                        eax_1[2] = 1
                else if (var_8_1 == 0 || arg1[1] u<= 2)
                    *ebx_1 = sub_680bc0
                else
                    *ebx_1 = sub_680ca0
                
                *(ebx_1 - 0x28) = (*(esi[1] + 8))(esi, 1, sub_67d190(esi[0x1c], esi[0x4d]), esi[0x4e])
            else
                *ebx_1 = sub_680ad0
            
            arg1 = &arg1[0x15]
            result = result_1 + 1
            ebx_1 += 4
            result_1 = result
            
            if (result s>= esi[9])
                break
            
            eax_3 = arg1
    
    return result
}
