// 函数名称: sub_65e060
// 虚拟地址: 0x65e060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65e060(void* arg1, void* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* edi = arg3
    void* edi = arg3
    int32_t esi_1 = (edi + 1) s>> 1
    void* ebx = (esi_1 << 2) + 4
    int32_t var_20 = esi_1
    __alloca_probe_16(ebx)
    int32_t __saved_edi
    int32_t* var_c = &__saved_edi
    __alloca_probe_16(ebx)
    arg3 = &__saved_edi
    __alloca_probe_16(ebx)
    int32_t* var_10 = &__saved_edi
    __alloca_probe_16(ebx)
    long double x87_r7 = float.t(1)
    var_c[esi_1] = fconvert.s(x87_r7)
    void* ecx = arg1
    int32_t ebx_2 = edi s>> 1
    void* eax_4 = 1
    int32_t* var_14 = &__saved_edi
    void* var_8 = 1
    
    if (esi_1 s>= 4)
        void* edx_1 = &var_c[esi_1 - 3]
        uint32_t i_20 = esi_1 u>> 2
        void* eax_5 = ecx + 8
        var_8 = (i_20 << 2) + 1
        uint32_t i_18 = i_20
        void* ecx_1 = ecx + (edi << 2) - 0xc
        uint32_t i
        
        do
            eax_5 += 0x10
            long double x87_r6_2 = fconvert.t(*(ecx_1 + 8)) + fconvert.t(*(eax_5 - 0x18))
            ecx_1 -= 0x10
            edx_1 -= 0x10
            i = i_18
            i_18 -= 1
            *(edx_1 + 0x18) = fconvert.s(x87_r6_2)
            *(edx_1 + 0x14) = fconvert.s(fconvert.t(*(ecx_1 + 0x14)) + fconvert.t(*(eax_5 - 0x14)))
            *(edx_1 + 0x10) = fconvert.s(fconvert.t(*(ecx_1 + 0x10)) + fconvert.t(*(eax_5 - 0x10)))
            *(edx_1 + 0xc) = fconvert.s(fconvert.t(*(ecx_1 + 0xc)) + fconvert.t(*(eax_5 - 0xc)))
        while (i != 1)
        eax_4 = var_8
        ecx = arg1
        esi_1 = var_20
    
    if (eax_4 s<= esi_1)
        void* var_18_1 = ecx + (eax_4 << 2) - 4
        void* edx_4 = esi_1 - eax_4
        void* var_1c_2 = &var_c[edx_4]
        void* eax_9 = ecx + ((edi - var_8) << 2)
        void* i_10 = edx_4 + 1
        void* i_1
        
        do
            long double x87_r6_10 = fconvert.t(*eax_9) + fconvert.t(*var_18_1)
            void* edx_9 = var_1c_2
            var_18_1 += 4
            var_1c_2 -= 4
            eax_9 -= 4
            *edx_9 = fconvert.s(x87_r6_10)
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
    
    void* edx_10 = 1
    arg3[ebx_2] = fconvert.s(x87_r7)
    void* var_8_1 = 1
    
    if (ebx_2 s>= 4)
        uint32_t i_21 = ebx_2 u>> 2
        void* eax_11 = ecx + 8
        var_8_1 = (i_21 << 2) + 1
        uint32_t i_19 = i_21
        void* edx_12 = &arg3[ebx_2 - 3]
        void* ecx_2 = ecx + (edi << 2) - 0xc
        uint32_t i_2
        
        do
            long double x87_r7_1 = fconvert.t(*(eax_11 - 8))
            eax_11 += 0x10
            long double x87_r7_2 = x87_r7_1 - fconvert.t(*(ecx_2 + 8))
            ecx_2 -= 0x10
            edx_12 -= 0x10
            i_2 = i_19
            i_19 -= 1
            *(edx_12 + 0x18) = fconvert.s(x87_r7_2)
            *(edx_12 + 0x14) = fconvert.s(fconvert.t(*(eax_11 - 0x14)) - fconvert.t(*(ecx_2 + 0x14)))
            *(edx_12 + 0x10) = fconvert.s(fconvert.t(*(eax_11 - 0x10)) - fconvert.t(*(ecx_2 + 0x10)))
            *(edx_12 + 0xc) = fconvert.s(fconvert.t(*(eax_11 - 0xc)) - fconvert.t(*(ecx_2 + 0xc)))
        while (i_2 != 1)
        edx_10 = var_8_1
        ecx = arg1
        esi_1 = var_20
    
    if (edx_10 s<= ebx_2)
        void* eax_14 = ebx_2 - edx_10
        edi = ecx + ((edi - var_8_1) << 2)
        void* edx_14 = &arg3[eax_14]
        void* i_11 = eax_14 + 1
        void* eax_15 = ecx + (edx_10 << 2) - 4
        void* i_3
        
        do
            long double x87_r7_9 = fconvert.t(*eax_15)
            eax_15 += 4
            long double x87_r7_10 = x87_r7_9 - fconvert.t(*edi)
            edi -= 4
            edx_14 -= 4
            i_3 = i_11
            i_11 -= 1
            *(edx_14 + 4) = fconvert.s(x87_r7_10)
        while (i_3 != 1)
    
    if (esi_1 s<= ebx_2)
        void* edx_17 = 1
        
        if (esi_1 s>= 4)
            uint32_t i_14 = esi_1 u>> 2
            void* eax_20 = &var_c[esi_1 - 2]
            edx_17 = (i_14 << 2) + 1
            uint32_t i_4
            
            do
                long double x87_r7_19 = fconvert.t(*(eax_20 + 4))
                eax_20 -= 0x10
                i_4 = i_14
                i_14 -= 1
                long double x87_r7_21 = fconvert.t(fconvert.s(x87_r7_19 - fconvert.t(*(eax_20 + 0x18))))
                *(eax_20 + 0x14) = fconvert.s(x87_r7_21)
                long double x87_r7_23 = fconvert.t(fconvert.s(fconvert.t(*(eax_20 + 0x10)) - x87_r7_21))
                *(eax_20 + 0x10) = fconvert.s(x87_r7_23)
                long double x87_r7_25 = fconvert.t(fconvert.s(fconvert.t(*(eax_20 + 0xc)) - x87_r7_23))
                *(eax_20 + 0xc) = fconvert.s(x87_r7_25)
                *(eax_20 + 8) = fconvert.s(fconvert.t(*(eax_20 + 8)) - x87_r7_25)
            while (i_4 != 1)
        
        if (edx_17 s<= esi_1)
            void* ecx_9 = esi_1 - edx_17
            void* eax_21 = &var_c[ecx_9]
            void* i_15 = ecx_9 + 1
            void* i_5
            
            do
                long double x87_r7_27 = fconvert.t(*eax_21)
                eax_21 -= 4
                i_5 = i_15
                i_15 -= 1
                *(eax_21 + 4) = fconvert.s(x87_r7_27 - fconvert.t(*(eax_21 + 8)))
            while (i_5 != 1)
        
        void* edx_19 = 1
        
        if (ebx_2 s>= 4)
            uint32_t i_16 = ebx_2 u>> 2
            void* eax_23 = &arg3[ebx_2 - 2]
            edx_19 = (i_16 << 2) + 1
            uint32_t i_6
            
            do
                long double x87_r7_29 = fconvert.t(*(eax_23 + 8))
                eax_23 -= 0x10
                i_6 = i_16
                i_16 -= 1
                long double x87_r7_31 = fconvert.t(fconvert.s(x87_r7_29 + fconvert.t(*(eax_23 + 0x14))))
                *(eax_23 + 0x14) = fconvert.s(x87_r7_31)
                long double x87_r7_33 = fconvert.t(fconvert.s(x87_r7_31 + fconvert.t(*(eax_23 + 0x10))))
                *(eax_23 + 0x10) = fconvert.s(x87_r7_33)
                long double x87_r7_35 = fconvert.t(fconvert.s(x87_r7_33 + fconvert.t(*(eax_23 + 0xc))))
                *(eax_23 + 0xc) = fconvert.s(x87_r7_35)
                *(eax_23 + 8) = fconvert.s(x87_r7_35 + fconvert.t(*(eax_23 + 8)))
            while (i_6 != 1)
        
        if (edx_19 s<= ebx_2)
            void* ecx_12 = ebx_2 - edx_19
            void* eax_24 = &arg3[ecx_12]
            void* i_17 = ecx_12 + 1
            void* i_7
            
            do
                long double x87_r7_37 = fconvert.t(*(eax_24 + 4))
                eax_24 -= 4
                i_7 = i_17
                i_17 -= 1
                *(eax_24 + 4) = fconvert.s(x87_r7_37 + fconvert.t(*(eax_24 + 4)))
            while (i_7 != 1)
    else
        void* edx_15 = 2
        
        if (ebx_2 s>= 2)
            if (ebx_2 - 1 s>= 4)
                void* eax_17 = &arg3[ebx_2 - 3]
                uint32_t i_12 = (ebx_2 - 1) u>> 2
                edx_15 = (i_12 << 2) + 2
                uint32_t i_8
                
                do
                    long double x87_r7_11 = fconvert.t(*(eax_17 + 0xc))
                    eax_17 -= 0x10
                    i_8 = i_12
                    i_12 -= 1
                    long double x87_r7_13 =
                        fconvert.t(fconvert.s(x87_r7_11 + fconvert.t(*(eax_17 + 0x14))))
                    *(eax_17 + 0x14) = fconvert.s(x87_r7_13)
                    long double x87_r6_13 = fconvert.t(fconvert.s(fconvert.t(*(eax_17 + 0x10))
                        + fconvert.t(*(eax_17 + 0x18))))
                    *(eax_17 + 0x10) = fconvert.s(x87_r6_13)
                    *(eax_17 + 0xc) = fconvert.s(x87_r7_13 + fconvert.t(*(eax_17 + 0xc)))
                    *(eax_17 + 8) = fconvert.s(x87_r6_13 + fconvert.t(*(eax_17 + 8)))
                while (i_8 != 1)
            
            if (edx_15 s<= ebx_2)
                void* ecx_6 = ebx_2 - edx_15
                void* eax_18 = &arg3[ecx_6]
                void* i_13 = ecx_6 + 1
                void* i_9
                
                do
                    long double x87_r7_17 = fconvert.t(*(eax_18 + 8))
                    eax_18 -= 4
                    i_9 = i_13
                    i_13 -= 1
                    *(eax_18 + 4) = fconvert.s(x87_r7_17 + fconvert.t(*(eax_18 + 4)))
                while (i_9 != 1)
    
    sub_65dad0(var_c, esi_1)
    int32_t ecx_13
    void* edx_21
    ecx_13, edx_21 = sub_65dad0(arg3, ebx_2)
    int32_t* var_34 = var_10
    int32_t* var_38 = var_c
    int32_t eax_27
    int80_t st0
    st0, eax_27 = sub_65dc00(var_20, edx_21, ecx_13)
    
    if (eax_27 == 0)
        int32_t* var_34_1 = var_14
        int32_t* var_38_1 = arg3
        int32_t eax_29
        int16_t x87control_1
        int80_t st0_1
        st0_1, eax_29, x87control_1 = sub_65dc00(ebx_2, arg3, var_14)
        
        if (eax_29 == 0)
            sub_65deb0(var_20, var_c, var_10)
            sub_65deb0(ebx_2, arg3, var_14)
            sub_5a7ac0(var_10, var_20, 4, sub_65dbb0)
            sub_5a7ac0(var_14, ebx_2, 4, sub_65dbb0)
            int32_t esi_10 = 0
            int32_t mxcsr
            
            if (var_20 s> 0)
                do
                    long double st0_2
                    st0_2, x87control_1 = sub_687140(mxcsr, x87control_1, fconvert.t(var_10[esi_10]))
                    *(arg2 + (esi_10 << 3)) = fconvert.s(st0_2)
                    esi_10 += 1
                while (esi_10 s< var_20)
            
            int32_t esi_11 = 0
            
            if (ebx_2 s> 0)
                float* edi_7 = arg2 + 4
                
                do
                    long double st0_3
                    st0_3, x87control_1 = sub_687140(mxcsr, x87control_1, fconvert.t(var_14[esi_11]))
                    *edi_7 = fconvert.s(st0_3)
                    esi_11 += 1
                    edi_7 = &edi_7[2]
                while (esi_11 s< ebx_2)
            
            return 0
    
    return 0xffffffff
}
