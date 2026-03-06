// 函数名称: sub_60f620
// 虚拟地址: 0x60f620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60f620(int32_t arg1, int32_t arg2, void* arg3, char* arg4, char* arg5, uint32_t arg6, int32_t arg7, int32_t arg8, void* arg9)
{
    // 第一条实际指令: int32_t ebx = arg8
    int32_t ebx = arg8
    void* esi = arg6
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(ebx)
    char* edi_1 = (arg9 + (ebx << 1)) * 3
    void* var_8 = arg3 + ebx
    void* edx_3 = (arg9 + edi_1) * 3
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(arg7)
    int32_t i = (eax_8 - edx_4) s>> 1
    void* ecx = esi
    char* esi_1 = esi + (edi_1 << 1)
    
    if (i != 0)
        int32_t edx_5 = arg1
        
        do
            int32_t j = (eax_2 - edx) s>> 1
            
            if (j != 0)
                do
                    uint32_t ebx_1 = zx.d(*arg4)
                    int32_t eax_14 = *(edx_5 + (ebx_1 << 2)) + 0x100
                    int32_t eax_18 =
                        *(edx_5 + (zx.d(*arg5) << 2) + 0x800) + *(edx_5 + (ebx_1 << 2) + 0x400) + 0x400
                    int32_t eax_20 = *(edx_5 + (zx.d(*arg5) << 2) + 0xc00)
                    arg5 = &arg5[1]
                    char* ebx_5 = arg3
                    uint32_t edx_6 = zx.d(*ebx_5)
                    int32_t eax_25 = *(arg2 + ((eax_20 + 0x700 + edx_6) << 2))
                        | *(arg2 + ((eax_18 + edx_6) << 2)) | *(arg2 + ((edx_6 + eax_14) << 2))
                    arg4 = &arg4[1]
                    char edx_10 = eax_25.b
                    *(edi_1 + ecx + 3) = edx_10
                    *(edi_1 + ecx) = edx_10
                    *(ecx + 3) = edx_10
                    *ecx = edx_10
                    uint8_t edx_13 = (eax_25 u>> 8).b
                    *(edi_1 + ecx + 4) = edx_13
                    *(edi_1 + ecx + 1) = edx_13
                    *(ecx + 4) = edx_13
                    *(ecx + 1) = edx_13
                    uint8_t eax_26 = (eax_25 u>> 0x10).b
                    *(edi_1 + ecx + 5) = eax_26
                    *(edi_1 + ecx + 2) = eax_26
                    *(ecx + 5) = eax_26
                    *(ecx + 2) = eax_26
                    uint32_t eax_28 = zx.d(ebx_5[1])
                    arg3 = &ebx_5[2]
                    int32_t eax_32 = *(arg2 + ((eax_28 + eax_20 + 0x700) << 2))
                        | *(arg2 + ((eax_28 + eax_18) << 2)) | *(arg2 + ((eax_28 + eax_14) << 2))
                    char edx_21 = eax_32.b
                    *(edi_1 + ecx + 9) = edx_21
                    *(edi_1 + ecx + 6) = edx_21
                    *(ecx + 9) = edx_21
                    *(ecx + 6) = edx_21
                    uint8_t edx_24 = (eax_32 u>> 8).b
                    *(edi_1 + ecx + 0xa) = edx_24
                    *(edi_1 + ecx + 7) = edx_24
                    *(ecx + 0xa) = edx_24
                    *(ecx + 7) = edx_24
                    char* edx_26 = var_8
                    uint8_t eax_33 = (eax_32 u>> 0x10).b
                    *(edi_1 + ecx + 0xb) = eax_33
                    *(edi_1 + ecx + 8) = eax_33
                    *(ecx + 0xb) = eax_33
                    *(ecx + 8) = eax_33
                    uint32_t eax_35 = zx.d(*edx_26)
                    ecx += 0xc
                    int32_t eax_39 = *(arg2 + ((eax_35 + eax_20 + 0x700) << 2))
                        | *(arg2 + ((eax_35 + eax_18) << 2)) | *(arg2 + ((eax_35 + eax_14) << 2))
                    char edx_32 = eax_39.b
                    *(edi_1 + esi_1 + 3) = edx_32
                    *(esi_1 + edi_1) = edx_32
                    esi_1[3] = edx_32
                    *esi_1 = edx_32
                    uint8_t edx_35 = (eax_39 u>> 8).b
                    *(edi_1 + esi_1 + 4) = edx_35
                    *(edi_1 + esi_1 + 1) = edx_35
                    esi_1[4] = edx_35
                    esi_1[1] = edx_35
                    uint8_t eax_40 = (eax_39 u>> 0x10).b
                    *(edi_1 + esi_1 + 5) = eax_40
                    *(edi_1 + esi_1 + 2) = eax_40
                    esi_1[5] = eax_40
                    esi_1[2] = eax_40
                    uint32_t eax_42 = zx.d(edx_26[1])
                    var_8 = &edx_26[2]
                    int32_t eax_46 = *(arg2 + ((eax_42 + eax_20 + 0x700) << 2))
                        | *(arg2 + ((eax_42 + eax_18) << 2)) | *(arg2 + ((eax_42 + eax_14) << 2))
                    char edx_43 = eax_46.b
                    *(edi_1 + esi_1 + 9) = edx_43
                    *(esi_1 + edi_1 + 6) = edx_43
                    esi_1[9] = edx_43
                    esi_1[6] = edx_43
                    uint8_t edx_46 = (eax_46 u>> 8).b
                    uint8_t eax_47 = (eax_46 u>> 0x10).b
                    *(edi_1 + esi_1 + 0xa) = edx_46
                    *(edi_1 + esi_1 + 7) = edx_46
                    esi_1[0xa] = edx_46
                    esi_1[7] = edx_46
                    *(edi_1 + esi_1 + 0xb) = eax_47
                    *(edi_1 + esi_1 + 8) = eax_47
                    edx_5 = arg1
                    esi_1[0xb] = eax_47
                    esi_1[8] = eax_47
                    j -= 1
                    esi_1 = &esi_1[0xc]
                while (j != 0)
                
                ebx = arg8
            
            arg3 += ebx
            var_8 += ebx
            ecx += edx_3
            esi_1 += edx_3
            i -= 1
        while (i != 0)
    
    return i
}
