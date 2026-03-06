// 函数名称: sub_611290
// 虚拟地址: 0x611290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_611290(char* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: void* esi = arg2
    void* esi = arg2
    int16_t var_8 = 0x4d42
    
    if (esi != 0)
        char* edi_1 = arg1
        int32_t ecx_1 = 0
        
        if ((*(*(edi_1 + 0x34) + 0x44) & 0x100) != 0 || *(*(edi_1 + 4) + 0x18) != 0)
            ecx_1 = 1
        
        void* eax_2 = *(edi_1 + 4)
        
        if (*(eax_2 + 4) != 0 && ecx_1 == 0)
            eax_2.b = *(eax_2 + 8)
            
            if (eax_2.b == 8)
                goto label_611363
            
            uint32_t __saved_ebx_1 = zx.d(eax_2.b)
            sub_5cce60("%d bpp BMP files not supported")
        else if (*(eax_2 + 8) != 0x18 || *(eax_2 + 0xc) != 0xff0000 || *(eax_2 + 0x10) != 0xff00
                || *(eax_2 + 0x14) != 0xff)
            void* var_5c_1
            int32_t __saved_ebx_2
            void var_4c
            
            if (ecx_1 == 0)
                __saved_ebx_2 = 0x17401803
                var_5c_1 = &var_4c
            else
                __saved_ebx_2 = 0x16362004
                var_5c_1 = &var_4c
            
            sub_5d7a50(var_5c_1, __saved_ebx_2)
            edi_1 = sub_5d6b20(edi_1, &var_4c, 0)
            
            if (edi_1 != 0)
                goto label_611363
            
            char __saved_ebx_8
            uint32_t __saved_ebx_3 = zx.d(__saved_ebx_8)
            sub_5cce60("Couldn't convert image to %d bpp")
        else
        label_611363:
            sub_5d6350(edi_1)
            int32_t eax_6 = zx.d(*(*(edi_1 + 4) + 9)) * *(edi_1 + 8)
            int32_t eax_8
            int32_t edx_3
            eax_8, edx_3 = (*(esi + 4))(esi, 0, 0, 1)
            sub_5cce50()
            (*(esi + 0xc))(esi, &var_8, 2, 1)
            int32_t var_7c_1 = 0
            sub_5dd880(esi)
            int32_t var_84_1 = 0
            sub_5dd860(esi)
            int32_t var_8c_1 = 0
            sub_5dd860(esi)
            int32_t var_94_1 = 0
            sub_5dd880(esi)
            int32_t eax_9 = *(edi_1 + 8)
            int32_t ecx_3 = *(edi_1 + 0xc)
            int32_t ebx_2 = *(edi_1 + 0x10) * ecx_3
            void* eax_10 = *(edi_1 + 4)
            uint32_t edx_5 = zx.d(*(eax_10 + 8))
            
            if (*(eax_10 + 4) == 0)
                arg2 = nullptr
            else
                arg2 = **(eax_10 + 4)
            
            int32_t var_5c_3 = 0x28
            sub_5dd880(esi)
            int32_t var_64_1 = eax_9
            sub_5dd880(esi)
            int32_t var_6c_1 = ecx_3
            sub_5dd880(esi)
            int32_t var_74_2 = 1
            sub_5dd860(esi)
            uint32_t var_7c_2 = edx_5
            sub_5dd860(esi)
            int32_t var_84_2 = 0
            sub_5dd880(esi)
            int32_t var_8c_2 = ebx_2
            sub_5dd880(esi)
            int32_t var_94_2 = 0
            sub_5dd880(esi)
            int32_t var_5c_4 = 0
            sub_5dd880(esi)
            void* var_64_2 = arg2
            sub_5dd880(esi)
            int32_t var_6c_2 = 0
            sub_5dd880(esi)
            void* ecx_6 = *(edi_1 + 4)
            
            if (*(ecx_6 + 4) != 0)
                int32_t* eax_13 = *(ecx_6 + 4)
                void* eax_14 = *eax_13
                
                if (eax_14 s> 0)
                    int32_t ebx_3 = eax_13[1] + 1
                    arg2 = eax_14
                    void* i
                    
                    do
                        (*(esi + 0xc))(esi, ebx_3 + 1, 1, 1)
                        (*(esi + 0xc))(esi, ebx_3, 1, 1)
                        (*(esi + 0xc))(esi, ebx_3 - 1, 1, 1)
                        (*(esi + 0xc))(esi, ebx_3 + 2, 1, 1)
                        ebx_3 += 4
                        i = arg2
                        arg2 -= 1
                    while (i != 1)
            
            int32_t ebx_5 = (*(esi + 4))(esi, 0, 0, 1) - eax_8
            int32_t eax_22
            int32_t edx_12
            eax_22, edx_12 = (*(esi + 4))(esi, eax_8 + 0xa, adc.d(edx_3, 0, eax_8 u>= 0xfffffff6), 0)
            
            if (edx_12 s<= 0 && (edx_12 s< 0 || eax_22 u< 0))
                sub_5cd050(3)
            
            int32_t var_5c_5 = ebx_5
            sub_5dd880(esi)
            int32_t eax_23
            int32_t edx_14
            eax_23, edx_14 =
                (*(esi + 4))(esi, ebx_5 + eax_8, adc.d(0, edx_3, ebx_5 + eax_8 u< ebx_5), 0)
            
            if (edx_14 s<= 0 && (edx_14 s< 0 || eax_23 u< 0))
                sub_5cd050(3)
            
            int32_t ecx_13 = *(edi_1 + 0x14)
            int32_t i_1 = *(edi_1 + 0x10) * *(edi_1 + 0xc) + ecx_13
            int32_t eax_25 = eax_6 & 0x80000003
            bool cond:3_1 = eax_25 == 0
            
            if (eax_25 s< 0)
                int32_t eax_27 = (eax_25 - 1) | 0xfffffffc
                eax_25 = eax_27 + 1
                cond:3_1 = eax_27 == 0xffffffff
            
            int32_t j_2
            
            j_2 = cond:3_1 ? 0 : 4 - eax_25
            
            if (i_1 u> ecx_13)
                do
                    i_1 -= *(edi_1 + 0x10)
                    
                    if ((*(esi + 0xc))(esi, i_1, 1, eax_6) != eax_6)
                        sub_5cd050(2)
                        break
                    
                    if (j_2 != 0)
                        arg2:3.b = 0
                        
                        if (j_2 s> 0)
                            int32_t j_1 = j_2
                            int32_t j
                            
                            do
                                (*(esi + 0xc))(esi, &arg2:3, 1, 1)
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                while (i_1 u> *(edi_1 + 0x14))
            
            int32_t ebx_10 = (*(esi + 4))(esi, 0, 0, 1) - eax_8
            int32_t eax_36
            int32_t edx_18
            eax_36, edx_18 = (*(esi + 4))(esi, eax_8 + 2, adc.d(edx_3, 0, eax_8 u>= 0xfffffffe), 0)
            
            if (edx_18 s<= 0 && (edx_18 s< 0 || eax_36 u< 0))
                sub_5cd050(3)
            
            int32_t var_5c_7 = ebx_10
            sub_5dd880(esi)
            int32_t eax_37
            int32_t edx_20
            eax_37, edx_20 =
                (*(esi + 4))(esi, ebx_10 + eax_8, adc.d(0, edx_3, ebx_10 + eax_8 u< ebx_10), 0)
            
            if (edx_20 s<= 0 && (edx_20 s< 0 || eax_37 u< 0))
                sub_5cd050(3)
            
            sub_5d6380(edi_1)
            
            if (edi_1 != arg1)
                sub_5d65d0(edi_1)
    
    if (arg3 != 0 && esi != 0)
        (*(esi + 0x10))(esi)
    
    int32_t eax_40 = sub_5cd590(sub_5cce30(), &data_83f3d3)
    int32_t eax_41 = neg.d(eax_40)
    return sbb.d(eax_41, eax_41, eax_40 != 0)
}
