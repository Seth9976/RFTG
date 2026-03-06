// 函数名称: sub_669aa0
// 虚拟地址: 0x669aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_669aa0(char* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: char* esi = arg1
    char* esi = arg1
    char eax = (*(esi + 0x6c)).b
    
    if ((eax & 1) == 0)
        sub_664320(esi, "Missing IHDR before pCAL")
        noreturn
    
    if ((eax & 4) != 0)
        sub_664100(esi, "Invalid pCAL after IDAT")
        return sub_667b40(esi, arg3)
    
    if (arg2 != 0 && (*(arg2 + 8) & 0x400) != 0)
        sub_664100(esi, "Duplicate pCAL chunk")
        return sub_667b40(esi, arg3)
    
    sub_666530(esi, *(esi + 0x2a8))
    char* eax_6 = sub_666560(esi, &arg3[1])
    *(esi + 0x2a8) = eax_6
    
    if (eax_6 == 0)
        return sub_664100(esi, "No memory for pCAL purpose")
    
    sub_664410(esi, eax_6, arg3)
    sub_662280(esi, eax_6, arg3)
    
    if (sub_667b40(esi, 0) != 0)
        int32_t eax_9 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_9
    
    arg3[*(esi + 0x2a8)] = 0
    char* ecx_2 = *(esi + 0x2a8)
    char* eax_10 = ecx_2
    
    while (*eax_10 != 0)
        eax_10 = &eax_10[1]
    
    void* ebx_1 = arg3 + ecx_2
    void* var_14 = ebx_1
    
    if (ebx_1 u<= &eax_10[0xc])
        sub_664100(esi, "Invalid pCAL data")
        int32_t eax_11 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_11
    
    void* ecx_3
    ecx_3.b = eax_10[1]
    uint32_t var_c =
        (((((zx.d(ecx_3.b) << 8) + zx.d(eax_10[2])) << 8) + zx.d(eax_10[3])) << 8) + zx.d(eax_10[4])
    uint32_t ecx_10
    ecx_10.b = eax_10[5]
    ebx_1.b = eax_10[0xa]
    uint32_t var_8 =
        (((((zx.d(ecx_10.b) << 8) + zx.d(eax_10[6])) << 8) + zx.d(eax_10[7])) << 8) + zx.d(eax_10[8])
    uint32_t ecx_17
    ecx_17.b = eax_10[9]
    int128_t* edi_1 = &eax_10[0xb]
    arg1:3.b = ecx_17.b
    int128_t* var_18 = edi_1
    
    if (ecx_17.b != 0)
        if (ecx_17.b != 1)
            if (ecx_17.b != 2)
                if (ecx_17.b != 3)
                    if (ecx_17.b u>= 4)
                        sub_664100(esi, "Unrecognized equation type for pCAL chunk")
                else if (ebx_1.b != 4)
                    goto label_669c68
            else if (ebx_1.b != 3)
                goto label_669c68
        else if (ebx_1.b != 3)
            goto label_669c68
    else if (ebx_1.b != 2)
    label_669c68:
        sub_664100(esi, "Invalid pCAL parameters for equation type")
        int32_t eax_13 = sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = 0
        return eax_13
    
    while (*edi_1 != 0)
        edi_1 += 1
    
    uint32_t eax_14 = zx.d(ebx_1.b)
    int32_t ebx_2 = sub_666560(esi, eax_14 << 2)
    
    if (ebx_2 == 0)
        sub_666530(esi, *(esi + 0x2a8))
        *(esi + 0x2a8) = ebx_2
        return sub_664100(esi, "No memory for pCAL params")
    
    int32_t ecx_19 = 0
    
    if (eax_14 s> 0)
        do
            edi_1 += 1
            *(ebx_2 + (ecx_19 << 2)) = edi_1
            
            if (edi_1 u> var_14)
            label_669d20:
                sub_664100(esi, "Invalid pCAL data")
                sub_666530(esi, *(esi + 0x2a8))
                *(esi + 0x2a8) = 0
                return sub_666530(esi, ebx_2)
            
            while (*edi_1 != 0)
                edi_1 += 1
                
                if (edi_1 u> var_14)
                    goto label_669d20
            
            if (edi_1 u> var_14)
                goto label_669d20
            
            ecx_19 += 1
        while (ecx_19 s< eax_14)
    
    sub_6647a0(esi, arg2, *(esi + 0x2a8), var_c, var_8, zx.d(arg1:3.b), eax_14, var_18, ebx_2)
    sub_666530(esi, *(esi + 0x2a8))
    *(esi + 0x2a8) = 0
    return sub_666530(esi, ebx_2)
}
