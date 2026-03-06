// 函数名称: sub_658710
// 虚拟地址: 0x658710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_658710(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t eax_1 = neg.d(arg5)
    int32_t eax_1 = neg.d(arg5)
    int32_t eax_3 = sbb.d(eax_1, eax_1, arg5 != 0) & arg4
    int32_t ecx_1 = neg.d(arg5)
    int32_t ecx_3 = sbb.d(ecx_1, ecx_1, arg5 != 0) & arg6
    int32_t edi_1 = (&data_82de60)[*(arg2 + (eax_3 << 2))]
    int32_t esi_2 = (&data_82de60)[*(arg2 + (ecx_3 << 2))]
    int32_t ebx = *(arg3 + (eax_3 << 2))
    int32_t eax_4 = *(arg3 + (ecx_3 << 2))
    int32_t esi_3 = *(arg3 + (arg5 << 2))
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(esi_3)
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(ebx)
    int32_t edi_4 = ((edx_1 & 3) + eax_6) s>> 2
    int32_t result_1 = edi_4 - ((eax_8 + (edx_3 & 3)) s>> 2)
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(ebx)
    int32_t eax_15
    int32_t edx_6
    edx_6:eax_15 = sx.q(eax_4)
    int32_t eax_19
    int32_t edx_8
    edx_8:eax_19 = sx.q(esi_3)
    int32_t eax_22
    int32_t edx_9
    edx_9:eax_22 = sx.q(eax_4)
    int32_t edx_10 = arg1
    int32_t eax_24 = (eax_22 - edx_9) s>> 1
    int32_t esi_7 = ((eax_19 - edx_8) s>> 1) - ((eax_15 + (edx_6 & 3)) s>> 2) + edi_4
    int32_t edi_5 = eax_24 + esi_7
    int32_t ebx_3 = ((eax_12 - edx_5) s>> 1) + result_1
    int32_t result = 0
    arg5 = edi_5
    
    if (result_1 s> 0)
        __builtin_memset(edx_10, 0, result_1 << 2)
        result = result_1
        edi_5 = arg5
    
    arg6 = 0
    
    if (result s< ebx_3)
        if (ebx_3 - result s>= 4)
            void* ecx_7 = edx_10 + (result << 2) + 8
            int32_t i_3 = ((ebx_3 - result - 4) u>> 2) + 1
            int32_t edx_13 = i_3 << 2
            result += edx_13
            arg6 = edx_13
            int32_t edx_14 = edi_1 + 8
            int32_t i
            
            do
                long double x87_r7_1 = fconvert.t(*(edx_14 - 8))
                edx_14 += 0x10
                long double x87_r7_2 = x87_r7_1 * fconvert.t(*(ecx_7 - 8))
                ecx_7 += 0x10
                i = i_3
                i_3 -= 1
                *(ecx_7 - 0x18) = fconvert.s(x87_r7_2)
                *(ecx_7 - 0x14) = fconvert.s(fconvert.t(*(edx_14 - 0x14)) * fconvert.t(*(ecx_7 - 0x14)))
                *(ecx_7 - 0x10) = fconvert.s(fconvert.t(*(ecx_7 - 0x10)) * fconvert.t(*(edx_14 - 0x10)))
                *(ecx_7 - 0xc) = fconvert.s(fconvert.t(*(edx_14 - 0xc)) * fconvert.t(*(ecx_7 - 0xc)))
            while (i != 1)
            edx_10 = arg1
            edi_5 = arg5
        
        if (result s< ebx_3)
            float* ecx_9 = edi_1 + (arg6 << 2)
            
            do
                result += 1
                long double x87_r7_10 = fconvert.t(*ecx_9) * fconvert.t(*(edx_10 + (result << 2) - 4))
                ecx_9 = &ecx_9[1]
                *(edx_10 + (result << 2) - 4) = fconvert.s(x87_r7_10)
            while (result s< ebx_3)
            
            edi_5 = arg5
    
    int32_t ebx_5 = eax_24 - 1
    
    if (esi_7 s< edi_5)
        result = edi_5 - esi_7
        
        if (result s>= 4)
            void* edi_12 = esi_2 + (ebx_5 << 2) - 8
            int32_t i_2 = ((arg5 - esi_7 - 4) u>> 2) + 1
            result = edx_10 + (esi_7 << 2) + 8
            int32_t edx_15 = i_2 << 2
            esi_7 += edx_15
            ebx_5 -= edx_15
            int32_t i_1
            
            do
                long double x87_r7_11 = fconvert.t(*(edi_12 + 8))
                edi_12 -= 0x10
                long double x87_r7_12 = x87_r7_11 * fconvert.t(*(result - 8))
                result += 0x10
                i_1 = i_2
                i_2 -= 1
                *(result - 0x18) = fconvert.s(x87_r7_12)
                *(result - 0x14) =
                    fconvert.s(fconvert.t(*(edi_12 + 0x14)) * fconvert.t(*(result - 0x14)))
                *(result - 0x10) =
                    fconvert.s(fconvert.t(*(edi_12 + 0x10)) * fconvert.t(*(result - 0x10)))
                *(result - 0xc) = fconvert.s(fconvert.t(*(edi_12 + 0xc)) * fconvert.t(*(result - 0xc)))
            while (i_1 != 1)
            edx_10 = arg1
            edi_5 = arg5
        
        if (esi_7 s< edi_5)
            result = esi_2 + (ebx_5 << 2)
            
            do
                esi_7 += 1
                long double x87_r7_20 = fconvert.t(*result) * fconvert.t(*(edx_10 + (esi_7 << 2) - 4))
                result -= 4
                *(edx_10 + (esi_7 << 2) - 4) = fconvert.s(x87_r7_20)
            while (esi_7 s< edi_5)
    
    if (esi_7 s< esi_3)
        result = 0
        __builtin_memset(edx_10 + (esi_7 << 2), 0, (esi_3 - esi_7) << 2)
    
    return result
}
