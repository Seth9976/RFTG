// 函数名称: sub_65ee00
// 虚拟地址: 0x65ee00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65ee00(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t* arg4, uint32_t arg5, int32_t* arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10)
{
    // 第一条实际指令: int32_t* edx = arg6
    int32_t* edx = arg6
    int32_t i = arg9
    int32_t* ebx = arg1
    int32_t var_2c = 0xffffffff
    int32_t var_28 = 0xffffffff
    int32_t* eax = ebx[0x72]
    int32_t* eax_1 = arg8
    int32_t edi
    int32_t var_80 = edi
    uint32_t var_1c = arg5
    int32_t* var_18 = edx
    uint32_t var_14 = arg5
    int32_t* var_10 = edx
    int32_t* var_94
    int32_t arg_20
    int32_t* arg_28
    
    if (eax_1 != 0 && i != 0)
        do
            int32_t* edi_2 = arg_28
            i -= 1
            
            if (*eax_1 == edi_2)
                if (edi_2 != eax)
                    do
                        int32_t* var_84_6 = &arg_20
                        int32_t* var_88_5 = &arg_28
                        var_94 = ebx
                        arg_28 = eax
                        int32_t eax_22
                        int32_t edx_20
                        eax_22, edx_20 = sub_65e740(var_94, arg8, arg9, var_88_5, var_84_6)
                        ebx[2] = eax_22
                        ebx[3] = edx_20
                    while (arg_28 != eax)
                
                int32_t eax_23 = ebx[0xe]
                ebx[0xd] = arg10 + 1
                
                if (eax_23 != 0)
                    __free_base(eax_23)
                
                int32_t eax_24 = ebx[0x10]
                
                if (eax_24 != 0)
                    __free_base(eax_24)
                
                int32_t eax_25 = ebx[0xf]
                
                if (eax_25 != 0)
                    __free_base(eax_25)
                
                int32_t esi_6 = ebx[0xd]
                ebx[0xe] = sub_5a881a((esi_6 << 3) + 8)
                int32_t eax_28 = _realloc(ebx[0x12], esi_6 << 5)
                uint32_t ecx_21 = ebx[0xd] << 4
                var_94 = ebx[0x13]
                ebx[0x12] = eax_28
                int32_t eax_29 = _realloc(var_94, ecx_21)
                int32_t esi_8 = ebx[0xd]
                ebx[0x13] = eax_29
                ebx[0x10] = sub_5a881a(esi_8 << 2)
                ebx[0xf] = sub_5a881a(esi_8 << 3)
                ebx[0x11] = sub_5a881a(esi_8 << 4)
                int32_t eax_34 = ebx[0xe]
                *(eax_34 + (arg10 << 3) + 8) = arg5
                *(eax_34 + (arg10 << 3) + 0xc) = arg6
                int32_t eax_35 = ebx[0xe]
                *(eax_35 + (arg10 << 3)) = arg2
                *(eax_35 + (arg10 << 3) + 4) = arg3
                int32_t eax_36 = arg7
                int32_t ecx_25 = arg_20
                
                if (eax_36 s<= 0 && (eax_36 s< 0 || ecx_25 u< 0))
                    ecx_25 = 0
                    eax_36 = 0
                
                int32_t ebx_1 = ebx[0x11]
                int32_t edi_11 = arg10 * 2
                *(ebx_1 + (edi_11 << 3) + 8) = ecx_25
                *(ebx_1 + (edi_11 << 3) + 0xc) = eax_36
                return 0
            
            eax_1 = &eax_1[1]
        while (i != 0)
    
    int32_t* arg_14
    int32_t* edi_13 = arg_14
    arg1 = nullptr
    int32_t var_c = 0
    bool cond:0 = edi_13 s< edx
    int32_t result
    
    if (edi_13 s<= edx)
        edx = arg4
        
        if (cond:0 || edx u< arg5)
            while (true)
                int32_t eax_39 = sbb.d(var_18, edi_13, var_1c u< edx)
                int32_t* var_30_2
                int32_t* esi_11
                uint32_t edi_14
                
                if (eax_39 s> 0 || (eax_39 s>= 0 && var_1c - edx u>= 0x10000))
                    uint32_t eax_40
                    int32_t* edx_27
                    eax_40, edx_27 =
                        __alldiv(var_1c + edx, adc.d(var_18, edi_13, var_1c + edx u< var_1c), 2, 0)
                    edi_14 = eax_40
                    var_30_2 = edx_27
                    esi_11 = edx_27
                else
                    esi_11 = arg_14
                    edi_14 = edx
                    var_30_2 = esi_11
                
                if (edi_14 != ebx[2] || esi_11 != ebx[3])
                    int32_t ecx_28 = *ebx
                    int32_t eax_44
                    
                    if (ecx_28 == 0)
                        eax_44 = 0xffffff7f
                    else
                        int32_t eax_41 = ebx[0xb1]
                        int32_t eax_42
                        
                        if (eax_41 != 0)
                            eax_42 = eax_41(ecx_28, edi_14, esi_11, 0)
                        
                        if (eax_41 == 0 || eax_42 == 0xffffffff)
                            eax_44 = 0xffffff80
                        else
                            ebx[2] = edi_14
                            ebx[3] = esi_11
                            sub_646250(&ebx[6])
                            eax_44 = 0
                    
                    int32_t edx_28
                    edx_28:result = sx.q(eax_44)
                    
                    if ((result | edx_28) != 0)
                        return result
                
                void var_54
                uint32_t eax_45
                int32_t* edx_29
                eax_45, edx_29 = sub_65e4c0(ebx, &var_54, 0xffffffff, 0xffffffff)
                
                if (eax_45 == 0xffffff80 && edx_29 == 0xffffffff)
                    return 0xffffff80
                
                uint32_t eax_46
                int32_t* ecx_31
                int32_t edx_30
                
                if (edx_29 s>= 0 && (edx_29 s> 0 || eax_45 u>= 0))
                    eax_46 = sub_6455f0(&var_54)
                    ecx_31 = arg8
                    edx_30 = arg9
                
                if (edx_29 s< 0 || (edx_29 s<= 0 && eax_45 u< 0) || ecx_31 == 0 || edx_30 == 0)
                label_65f24a:
                    var_1c = edi_14
                    var_18 = var_30_2
                    
                    if (edx_29 s>= 0 && (edx_29 s> 0 || eax_45 u>= 0))
                        var_14 = eax_45
                        var_10 = edx_29
                else
                    while (true)
                        edx_30 -= 1
                        
                        if (*ecx_31 == eax_46)
                            arg4 = ebx[2]
                            arg_14 = ebx[3]
                            break
                        
                        ecx_31 = &ecx_31[1]
                        
                        if (edx_30 == 0)
                            goto label_65f24a
                
                edx = var_18
                int32_t* temp8_1 = arg_14
                
                if (temp8_1 s>= edx)
                    if (temp8_1 s> edx)
                        break
                    
                    if (arg4 u>= var_1c)
                        break
                
                edi_13 = arg_14
                edx = arg4
    
    int32_t* ecx = var_10
    ebx[2] = var_14
    ebx[3] = ecx
    
    if (eax + 1 != eax)
        do
            int32_t* var_84_1 = &var_2c
            int32_t* var_88_1 = &arg_14
            var_94 = ebx
            arg_14 = eax
            int32_t eax_4
            eax_4, edx = sub_65e740(var_94, arg8, arg9, var_88_1, var_84_1)
            ebx[2] = eax_4
            ebx[3] = edx
        while (arg_14 != eax)
        
        ecx = var_10
    
    if (ebx[2] != var_14 || ebx[3] != ecx)
        int32_t* var_84_2 = ecx
        uint32_t var_88_2 = var_14
        edx:result = sx.q(sub_65e460(ebx, edx, ecx))
        ecx = result | edx
        
        if (ecx == 0)
            goto label_65eede
    else
    label_65eede:
        int32_t* var_84_3 = &var_c
        int32_t* var_88_3 = &arg1
        int32_t var_44
        int32_t* var_8c_2 = &var_44
        void var_74
        int32_t* var_90_2 = &var_74
        var_94 = ebx
        int32_t edx_1
        edx_1:result = sx.q(sub_65e940(nullptr, edx, ecx, var_94, var_90_2, var_8c_2))
        
        if ((result | edx_1) == 0)
            int32_t* edx_2 = ebx[2]
            int32_t edi_4 = ebx[0x72]
            void* var_84_4 = &var_74
            arg_14 = ebx[3]
            int32_t eax_9
            int32_t edx_3
            eax_9, edx_3 = sub_65ec50(ebx, var_84_4)
            int32_t* ecx_5 = arg1
            int32_t eax_10 = var_c
            int32_t ecx_6 = arg_20
            var_94 = arg_28
            int32_t edx_8
            edx_8:result = sx.q(sub_65ee00(ebx, var_14, var_10, ebx[2], ebx[3], arg5, arg6, ecx_6, 
                arg7, var_94, ecx_5, eax_10, arg10 + 1))
            
            if ((result | edx_8) == 0)
                int32_t* eax_15 = arg1
                
                if (eax_15 != 0)
                    __free_base(eax_15)
                
                int32_t eax_16 = ebx[0xe]
                *(eax_16 + (arg10 << 3) + 8) = var_14
                *(eax_16 + (arg10 << 3) + 0xc) = var_10
                *(ebx[0x10] + (arg10 << 2) + 4) = edi_4
                int32_t eax_17 = ebx[0xf]
                int32_t* edx_11 = arg_14
                *(eax_17 + (arg10 << 3) + 8) = edx_2
                *(eax_17 + (arg10 << 3) + 0xc) = edx_11
                int32_t eax_19 = arg10 * 2
                __builtin_memcpy(((arg10 + 1) << 5) + ebx[0x12], &var_74, 0x20)
                int32_t ecx_13 = ebx[0x13]
                *(ecx_13 + (eax_19 << 3) + 0x10) = var_44
                int32_t var_40
                *(ecx_13 + (eax_19 << 3) + 0x14) = var_40
                int32_t var_3c
                *(ecx_13 + (eax_19 << 3) + 0x18) = var_3c
                int32_t var_38
                *(ecx_13 + (eax_19 << 3) + 0x1c) = var_38
                int32_t ecx_15 = ebx[0x11]
                *(ecx_15 + (eax_19 << 3) + 8) = var_2c
                *(ecx_15 + (eax_19 << 3) + 0xc) = var_28
                int32_t ecx_16 = ebx[0x11]
                *(ecx_16 + (eax_19 << 3) + 0x10) = eax_9
                *(ecx_16 + (eax_19 << 3) + 0x14) = edx_3
                int32_t ecx_17 = ebx[0x11]
                int32_t temp6_1 = *(ecx_17 + (eax_19 << 3) + 0x18)
                *(ecx_17 + (eax_19 << 3) + 0x18) -= eax_9
                *(ecx_17 + (eax_19 << 3) + 0x1c) =
                    sbb.d(*(ecx_17 + (eax_19 << 3) + 0x1c), edx_3, temp6_1 u< eax_9)
                int32_t edx_19 = ebx[0x11]
                int32_t temp7_1 = *(edx_19 + (eax_19 << 3) + 0x1c)
                
                if (temp7_1 s<= 0 && (temp7_1 s< 0 || *(edx_19 + (eax_19 << 3) + 0x18) u< 0))
                    *(edx_19 + (eax_19 << 3) + 0x18) = 0
                    *(edx_19 + (eax_19 << 3) + 0x1c) = 0
                
                return 0
    
    return result
}
