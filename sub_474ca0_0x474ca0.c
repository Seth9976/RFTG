// 函数名称: sub_474ca0
// 虚拟地址: 0x474ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_474ca0(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    __builtin_memcpy(0x27c06dc, arg1, 0x90)
    int32_t eax_2 = sub_4c95c0()
    void* esi_1 = data_27e7a54
    int32_t ecx = 0
    data_27c075c = eax_2
    data_27c06d8 = 1
    data_27c06d4 = 0
    int32_t var_20 = 1
    int32_t i_3 = 0
    int32_t* ebx_1 = arg1 + 0x54
    int32_t i
    
    do
        int32_t eax_3 = ebx_1[-1]
        
        if (eax_3 != 0)
            if (eax_3 == 1)
                data_27c06d4 = ecx + 1
                *(ecx * 0x30 + 0x27c0638) = 4
                *(ecx * 0x30 + 0x27c0634) = *(esi_1 + 0x18)
                void* ecx_10 = esi_1
                int32_t edx_7
                
                do
                    edx_7.b = *ecx_10
                    *(ecx * 0x30 + 0x27c0614 - esi_1 + ecx_10) = edx_7.b
                    ecx_10 += 1
                while (edx_7.b != 0)
            else
                if (eax_3 != 2)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RftgTitleScreen.cpp", 0x2b4, 
                        "ClientNewLocalGame")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                data_27c06d4 = ecx + 1
                *(ecx * 0x30 + 0x27c0634) = *ebx_1 + 0xf
                *(ecx * 0x30 + 0x27c0638) = *ebx_1
                char* var_24
                char* eax_11 = *sub_474c10(*ebx_1, &var_24)
                var_20 += 1
                
                if (eax_11 == 0)
                    eax_11 = &data_83f3d3
                
                void* edi_4 = ecx * 0x30 + 0x27c0614 - eax_11
                char j
                
                do
                    j = *eax_11
                    *(edi_4 + eax_11) = j
                    eax_11 = &eax_11[1]
                while (j != 0)
                
                char* eax_12 = var_24
                
                if (eax_12 != 0 && *eax_12 != j)
                    void* eax_14 = sub_4c4060(&var_24)
                    int32_t temp6_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_4 = *(eax_14 + 0xc) + 0x10
                        sub_4f4430(eax_14, sub_4f4380(esi_4), esi_4)
                
                esi_1 = data_27e7a54
            
            ecx = data_27c06d4
        
        i = i_3 + 1
        ebx_1 = &ebx_1[3]
        i_3 = i
    while (i s< 4)
    int32_t i_1 = 0
    int32_t var_1c = 0
    int32_t var_18 = 1
    int32_t result = 2
    int32_t var_10 = 3
    
    if (*(arg1 + 0x44) != 1 && ecx - 1 s> 0)
        int32_t edi_7 = ecx
        
        if (0 s> ecx - 1)
            sub_4c5870("min <= max", &data_83f3d3, "Random.cpp", 0x58, "RandomIntRange")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        do
            if (edi_7 s<= 0)
                sub_4c5870("maxPlusOne > 0", &data_83f3d3, "Random.cpp", 0x4f, "RandomInt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t temp1_1 = modu.dp.d(0:(sub_4c95c0()), edi_7)
            int32_t ecx_5 = (&var_1c)[i_1]
            edi_7 -= 1
            void* eax_20 = &(&__saved_ebp)[temp1_1 + i_1 - 6]
            (&var_1c)[i_1] = *eax_20
            i_1 += 1
            *eax_20 = ecx_5
        while (i_1 s< ecx - 1)
        
        ecx = data_27c06d4
    
    int32_t i_2 = 0
    
    if (ecx s> 0)
        int32_t* edx_5 = &data_27c077c
        int32_t* ecx_6 = &data_27c0640
        
        do
            ecx_6[-1] = (&var_1c)[i_2]
            *ecx_6 = 0xffffffff
            edx_5[-1] = 0
            *edx_5 = 0
            i_2 += 1
            ecx_6 = &ecx_6[0xc]
            edx_5 = &edx_5[0x138a]
        while (i_2 s< data_27c06d4)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
