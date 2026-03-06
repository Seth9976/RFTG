// 函数名称: sub_605b50
// 虚拟地址: 0x605b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_605b50(int32_t* arg1, int32_t arg2, int16_t* arg3, int32_t* arg4, void* arg5)
{
    // 第一条实际指令: void* ecx_1 = arg4[1]
    void* ecx_1 = arg4[1]
    uint32_t edx = zx.d(*(ecx_1 + 9))
    int16_t* ebx = arg3
    
    if (edx == 2)
        if (*(ecx_1 + 0x10) != 0x7e0 && *(ecx_1 + 0xc) != 0x7e0 && *(ecx_1 + 0x14) != 0x7e0)
            int32_t i_4 = arg1[3]
            void* ecx_14 = *arg1
            void* eax_17 = arg1[2] + ecx_14
            arg5 += neg.d(ecx_14) << 1
            int32_t i
            
            do
                void* edi_8 = nullptr
                
                do
                    uint32_t esi_5 = zx.d(*(ebx + 1))
                    edi_8 += zx.d(*ebx)
                    ebx = &ebx[1]
                    
                    if (esi_5 != 0)
                        void* ecx_16 = edi_8
                        uint32_t eax_18 = esi_5
                        
                        if (ecx_14 - edi_8 s> 0)
                            ecx_16 = ecx_14
                            eax_18 = eax_18 - ecx_16 + edi_8
                        
                        void* edx_19 = eax_17 - ecx_16
                        
                        if (eax_18 s> edx_19)
                            eax_18 = edx_19
                        
                        if (eax_18 s> 0)
                            uint32_t var_30_2 = eax_18 * 2
                            void* var_34_2 = &ebx[ecx_16 - edi_8]
                            void* var_38_2 = arg5 + (ecx_16 << 1)
                            sub_5cd110()
                        
                        ebx = &ebx[esi_5]
                        edi_8 += esi_5
                    else if (edi_8 == 0)
                        return 
                while (edi_8 s< arg2)
                
                ebx += ebx & 2
                void* ecx_19 = ecx_14
                void* eax_23 = nullptr
                
                do
                    uint32_t edi_9 = zx.d(ebx[1])
                    eax_23 += zx.d(*ebx)
                    ebx = &ebx[2]
                    void* var_8_2 = eax_23
                    uint32_t var_1c_2 = edi_9
                    
                    if (edi_9 != 0)
                        if (ecx_19 - eax_23 s> 0)
                            edi_9 = edi_9 - ecx_19 + eax_23
                            eax_23 = ecx_19
                        
                        uint32_t ecx_21 = eax_17 - eax_23
                        
                        if (edi_9 s> ecx_21)
                            edi_9 = ecx_21
                        
                        if (edi_9 s> 0)
                            void* edx_26 = arg5 + (eax_23 << 1)
                            int32_t esi_6 = 0
                            
                            if (edi_9 s> 0)
                                do
                                    uint32_t eax_27 = zx.d(*(edx_26 + (esi_6 << 1)))
                                    int32_t edx_27 = *(ebx + ((eax_23 - var_8_2) << 2) + (esi_6 << 2))
                                    int32_t ecx_27 = (eax_27 << 0x10 | eax_27) & 0x3e07c1f
                                    int32_t eax_34 = (((((edx_27 & 0x3e07c1f) - ecx_27)
                                        * (edx_27 u>> 5 & 0x1f)) u>> 5) + ecx_27) & 0x3e07c1f
                                    *(edx_26 + (esi_6 << 1)) = (eax_34 u>> 0x10).w | eax_34.w
                                    esi_6 += 1
                                while (esi_6 s< edi_9)
                        
                        ecx_19 = ecx_14
                        ebx = &ebx[var_1c_2 * 2]
                        eax_23 = var_8_2 + var_1c_2
                while (eax_23 s< arg2)
                
                arg5 += arg4[4]
                i = i_4
                i_4 -= 1
            while (i != 1)
            return 
        
        int32_t ecx_32 = *arg1
        int32_t eax_38 = arg1[2] + ecx_32
        int32_t i_3 = arg1[3]
        arg5 += neg.d(ecx_32) << 1
        int32_t i_1
        
        do
            int32_t esi_7 = 0
            
            do
                uint32_t edi_11 = zx.d(*(ebx + 1))
                esi_7 += zx.d(*ebx)
                ebx = &ebx[1]
                
                if (edi_11 != 0)
                    int32_t ecx_35 = esi_7
                    arg1 = edi_11
                    
                    if (ecx_32 - esi_7 s> 0)
                        ecx_35 = ecx_32
                        arg1 = arg1 - ecx_35 + esi_7
                    
                    int32_t* edx_35 = eax_38 - ecx_35
                    
                    if (arg1 s> edx_35)
                        arg1 = edx_35
                    
                    if (arg1 s> 0)
                        int32_t var_30_3 = arg1 * 2
                        void* var_34_3 = &ebx[ecx_35 - esi_7]
                        void* var_38_3 = arg5 + (ecx_35 << 1)
                        sub_5cd110()
                    
                    ebx = &ebx[edi_11]
                    esi_7 += edi_11
                else if (esi_7 == 0)
                    return 
            while (esi_7 s< arg2)
            
            int32_t eax_43 = 0
            ebx += ebx & 2
            
            do
                uint32_t ecx_38 = zx.d(ebx[1])
                eax_43 += zx.d(*ebx)
                ebx = &ebx[2]
                int32_t var_8_4 = eax_43
                
                if (ecx_38 != 0)
                    uint32_t edi_12 = ecx_38
                    
                    if (ecx_32 - eax_43 s> 0)
                        edi_12 = edi_12 - ecx_32 + eax_43
                        eax_43 = ecx_32
                    
                    uint32_t ecx_41 = eax_38 - eax_43
                    
                    if (edi_12 s> ecx_41)
                        edi_12 = ecx_41
                    
                    if (edi_12 s> 0)
                        void* edx_42 = arg5 + (eax_43 << 1)
                        int32_t esi_8 = 0
                        
                        if (edi_12 s> 0)
                            do
                                uint32_t eax_47 = zx.d(*(edx_42 + (esi_8 << 1)))
                                int32_t edx_43 = *(ebx + ((eax_43 - var_8_4) << 2) + (esi_8 << 2))
                                int32_t ecx_47 = (eax_47 << 0x10 | eax_47) & 0x7e0f81f
                                int32_t eax_54 = (((((edx_43 & 0x7e0f81f) - ecx_47)
                                    * (edx_43 u>> 5 & 0x1f)) u>> 5) + ecx_47) & 0x7e0f81f
                                *(edx_42 + (esi_8 << 1)) = (eax_54 u>> 0x10).w | eax_54.w
                                esi_8 += 1
                            while (esi_8 s< edi_12)
                    
                    ebx = &ebx[ecx_38 * 2]
                    eax_43 = var_8_4 + ecx_38
            while (eax_43 s< arg2)
            
            arg5 += arg4[4]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    else if (edx == 4)
        int32_t ecx_2 = *arg1
        int32_t eax_1 = arg1[2] + ecx_2
        int32_t i_5 = arg1[3]
        arg5 += neg.d(ecx_2) << 2
        int32_t i_2
        
        do
            int32_t edi_1 = 0
            
            do
                uint32_t esi_1 = zx.d(ebx[1])
                edi_1 += zx.d(*ebx)
                ebx = &ebx[2]
                
                if (esi_1 != 0)
                    int32_t ecx_5 = edi_1
                    arg1 = esi_1
                    
                    if (ecx_2 - edi_1 s> 0)
                        ecx_5 = ecx_2
                        arg1 = arg1 - ecx_5 + edi_1
                    
                    int32_t* edx_7 = eax_1 - ecx_5
                    
                    if (arg1 s> edx_7)
                        arg1 = edx_7
                    
                    if (arg1 s> 0)
                        int32_t var_30_1 = arg1 * 4
                        void* var_34_1 = &ebx[(ecx_5 - edi_1) * 2]
                        void* var_38_1 = arg5 + (ecx_5 << 2)
                        sub_5cd110()
                    
                    ebx = &ebx[esi_1 * 2]
                    edi_1 += esi_1
                else if (edi_1 == 0)
                    return 
            while (edi_1 s< arg2)
            
            int32_t edx_11 = 0
            
            do
                uint32_t esi_2 = zx.d(ebx[1])
                edx_11 += zx.d(*ebx)
                ebx = &ebx[2]
                
                if (esi_2 != 0)
                    int32_t ecx_7 = edx_11
                    uint32_t eax_7 = esi_2
                    
                    if (ecx_2 - edx_11 s> 0)
                        ecx_7 = ecx_2
                        eax_7 = eax_7 - ecx_7 + edx_11
                    
                    uint32_t edi_5 = eax_1 - ecx_7
                    
                    if (eax_7 s> edi_5)
                        eax_7 = edi_5
                    
                    if (eax_7 s> 0)
                        void* edi_7 = arg5 + (ecx_7 << 2)
                        
                        if (eax_7 s> 0)
                            int32_t* ecx_10 = &ebx[(ecx_7 - edx_11) * 2] - edi_7
                            int32_t* var_1c_1 = ecx_10
                            uint32_t var_10_1 = eax_7
                            
                            while (true)
                                int32_t eax_9 = *(ecx_10 + edi_7)
                                int32_t ecx_11 = *edi_7
                                int32_t esi_4 = ecx_11 & 0xff00ff
                                int32_t ecx_12 = ecx_11 & 0xff00
                                uint32_t edx_13 = eax_9 u>> 0x18
                                *edi_7 = ((((((eax_9 & 0xff00ff) - esi_4) * edx_13) u>> 8) + esi_4)
                                    & 0xffff00ff) | ((((((eax_9 & 0xff00) - ecx_12) * edx_13) u>> 8)
                                    + ecx_12) & 0xff00) | 0xff000000
                                edi_7 += 4
                                uint32_t temp5_1 = var_10_1
                                var_10_1 -= 1
                                
                                if (temp5_1 == 1)
                                    break
                                
                                ecx_10 = var_1c_1
                    
                    ebx = &ebx[esi_2 * 2]
                    edx_11 += esi_2
            while (edx_11 s< arg2)
            
            arg5 += arg4[4]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
}
