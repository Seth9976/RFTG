// 函数名称: sub_5e6e40
// 虚拟地址: 0x5e6e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e6e40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t esi = *(arg1 + 0x18)
    int32_t esi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(esi) * fconvert.t(*(arg1 + 8)))
    int32_t edi_1 = *(arg1 + 0x10)
    int32_t edx = *(edi_1 + esi - 4)
    void* var_8 = edi_1 + eax_1 - 0x10
    int32_t edx_2 = *(edi_1 + esi - 8)
    int32_t ecx_5 = ((edx & 0xff0000) | edx u>> 0x10) u>> 8 | (edx << 0x10 | (edx & 0xff00)) << 8
    int32_t edx_4 = *(edi_1 + esi - 0xc)
    int32_t esi_11 =
        ((edx_2 & 0xff0000) | edx_2 u>> 0x10) u>> 8 | (edx_2 << 0x10 | (edx_2 & 0xff00)) << 8
    int32_t edx_6 = *(edi_1 + esi - 0x10)
    int32_t* var_c = edi_1 + esi - 0x10
    int32_t var_10 = 0
    int32_t var_14 =
        ((edx_6 & 0xff0000) | edx_6 u>> 0x10) u>> 8 | (edx_6 << 0x10 | (edx_6 & 0xff00)) << 8
    int32_t var_24
    void* result
    
    if (var_8 u< edi_1)
        result = arg1
    else
        int32_t edi_13 =
            ((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8
        
        do
            *(var_8 + 0xc) =
                ((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8
            *(var_8 + 8) = ((esi_11 & 0xff0000) | esi_11 u>> 0x10) u>> 8
                | ((esi_11 & 0xff00) | esi_11 << 0x10) << 8
            *(var_8 + 4) = ((edi_13 & 0xff0000) | edi_13 u>> 0x10) u>> 8
                | ((edi_13 & 0xff00) | edi_13 << 0x10) << 8
            int32_t* eax_25 = var_8
            *eax_25 = ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
                | ((var_14 & 0xff00) | var_14 << 0x10) << 8
            var_8 = eax_25 - 0x10
            int32_t eax_28 = var_10 + esi - 0x100
            var_10 = eax_28
            
            if (eax_28 * 2 s>= eax_1)
                int32_t edx_35 = var_c[-1]
                var_c -= 0x10
                int32_t eax_37
                int32_t edx_37
                edx_37:eax_37 = sx.q(((edx_35 & 0xff0000) | edx_35 u>> 0x10) u>> 8
                    | (edx_35 << 0x10 | (edx_35 & 0xff00)) << 8)
                int32_t eax_39
                int32_t edx_38
                edx_38:eax_39 = sx.q(ecx_5)
                int32_t edx_40 = var_c[2]
                ecx_5 =
                    (eax_37 + eax_39) u>> 1 | adc.d(edx_37, edx_38, eax_37 + eax_39 u< eax_37) << 0x1f
                int32_t eax_47
                int32_t edx_42
                edx_42:eax_47 = sx.q(((edx_40 & 0xff0000) | edx_40 u>> 0x10) u>> 8
                    | (edx_40 << 0x10 | (edx_40 & 0xff00)) << 8)
                int32_t eax_49
                int32_t edx_43
                edx_43:eax_49 = sx.q(esi_11)
                esi_11 =
                    (eax_47 + eax_49) u>> 1 | adc.d(edx_42, edx_43, eax_47 + eax_49 u< eax_47) << 0x1f
                int32_t edx_44 = var_c[1]
                int32_t eax_58
                int32_t edx_46
                edx_46:eax_58 = sx.q(((edx_44 & 0xff0000) | edx_44 u>> 0x10) u>> 8
                    | (edx_44 << 0x10 | (edx_44 & 0xff00)) << 8)
                int32_t eax_60
                int32_t edx_47
                edx_47:eax_60 = sx.q(edi_13)
                int32_t edx_49 = *var_c
                var_24 =
                    (eax_58 + eax_60) u>> 1 | adc.d(edx_46, edx_47, eax_58 + eax_60 u< eax_58) << 0x1f
                int32_t eax_68
                int32_t edx_51
                edx_51:eax_68 = sx.q(((edx_49 & 0xff0000) | edx_49 u>> 0x10) u>> 8
                    | (edx_49 << 0x10 | (edx_49 & 0xff00)) << 8)
                int32_t eax_70
                int32_t edx_52
                edx_52:eax_70 = sx.q(var_14)
                var_10 -= eax_1
                var_14 =
                    (eax_68 + eax_70) u>> 1 | adc.d(edx_51, edx_52, eax_68 + eax_70 u< eax_68) << 0x1f
                edi_13 = var_24
            
            result = arg1
        while (var_8 u>= edi_1)
    
    *(result + 0x50) += 1
    *(result + 0x18) = eax_1
    int32_t ecx_8 = *(result + 0x50)
    
    if (*(result + (ecx_8 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_8 << 2) + 0x28))(result, arg2, var_24, esi - 0x100, edi_1, eax_1, var_14, 
        var_10, var_c, var_8)
}
