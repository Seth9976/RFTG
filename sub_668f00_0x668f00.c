// 函数名称: sub_668f00
// 虚拟地址: 0x668f00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_668f00(void* arg1, void* arg2, char* arg3)
{
    // 第一条实际指令: char* edi = arg1
    char* edi = arg1
    int32_t eax = *(edi + 0x288)
    
    if (eax != 0)
        if (eax == 1)
            return sub_667b40(edi, arg3)
        
        *(edi + 0x288) = eax - 1
        
        if (eax == 2)
            sub_664100(edi, "No space in chunk cache for sPLT")
            return sub_667b40(edi, arg3)
    
    char eax_5 = (*(edi + 0x6c)).b
    
    if ((eax_5 & 1) == 0)
        sub_664320(edi, "Missing IHDR before sPLT")
        noreturn
    
    if ((eax_5 & 4) != 0)
        sub_664100(edi, "Invalid sPLT after IDAT")
        return sub_667b40(edi, arg3)
    
    sub_666530(edi, *(edi + 0x2a8))
    char* eax_8 = sub_6664e0(edi, &arg3[1])
    *(edi + 0x2a8) = eax_8
    sub_664410(edi, eax_8, arg3)
    sub_662280(edi, eax_8, arg3)
    
    if (sub_667b40(edi, 0) != 0)
        int32_t result = sub_666530(edi, *(edi + 0x2a8))
        *(edi + 0x2a8) = 0
        return result
    
    arg3[*(edi + 0x2a8)] = 0
    char* ecx_2 = *(edi + 0x2a8)
    char* esi_1 = ecx_2
    
    while (*esi_1 != 0)
        esi_1 = &esi_1[1]
    
    if (&esi_1[1] u> ecx_2 + arg3 - 2)
        sub_666530(edi, ecx_2)
        *(edi + 0x2a8) = 0
        return sub_664100(edi, "malformed sPLT chunk")
    
    int32_t eax_10
    eax_10.b = esi_1[1]
    void* esi_3 = &esi_1[2]
    int32_t edx_3
    edx_3.b = eax_10.b != 8
    char var_10 = eax_10.b
    void* eax_14 = ecx_2 - esi_3 + arg3
    int32_t edx_5 = 0
    uint32_t temp0 = divu.dp.d(edx_5:eax_14, (edx_3 << 2) + 6)
    
    if (modu.dp.d(edx_5:eax_14, (edx_3 << 2) + 6) != 0)
        sub_666530(edi, ecx_2)
        *(edi + 0x2a8) = 0
        return sub_664100(edi, "sPLT chunk has bad length")
    
    if (temp0 u> 0x19999999)
        return sub_664100(edi, "sPLT chunk too long")
    
    int32_t edx_7 = sub_666560(edi, temp0 * 0xa)
    int32_t var_c = edx_7
    
    if (edx_7 == 0)
        return sub_664100(edi, "sPLT chunk requires too much memory")
    
    int32_t ecx_3 = 0
    
    if (temp0 s> 0)
        void* eax_22 = nullptr
        arg1 = nullptr
        
        while (true)
            void* eax_23 = eax_22 + edx_7
            uint16_t edx_8 = zx.w(*esi_3)
            uint16_t edx_11
            void* esi_4
            
            if (var_10 != 8)
                *eax_23 = edx_8 * 0x100 + zx.w(*(esi_3 + 1))
                *(eax_23 + 2) = zx.w(*(esi_3 + 2)) * 0x100 + zx.w(*(esi_3 + 3))
                *(eax_23 + 4) = zx.w(*(esi_3 + 4)) * 0x100 + zx.w(*(esi_3 + 5))
                edx_11 = zx.w(*(esi_3 + 6)) * 0x100 + zx.w(*(esi_3 + 7))
                esi_4 = esi_3 + 8
            else
                *eax_23 = edx_8
                *(eax_23 + 2) = zx.w(*(esi_3 + 1))
                *(eax_23 + 4) = zx.w(*(esi_3 + 2))
                edx_11 = zx.w(*(esi_3 + 3))
                esi_4 = esi_3 + 4
            
            *(eax_23 + 6) = edx_11
            *(eax_23 + 8) = zx.w(*esi_4) * 0x100 + zx.w(*(esi_4 + 1))
            ecx_3 += 1
            eax_22 = arg1 + 0xa
            esi_3 = esi_4 + 2
            arg1 = eax_22
            
            if (ecx_3 s>= temp0)
                break
            
            edx_7 = var_c
    
    int32_t var_14 = *(edi + 0x2a8)
    sub_665170(edi, arg2, &var_14, 1)
    sub_666530(edi, *(edi + 0x2a8))
    *(edi + 0x2a8) = 0
    return sub_666530(edi, var_c)
}
