// 函数名称: sub_5713b0
// 虚拟地址: 0x5713b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5713b0()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    char edx = __chkstk(0x1014)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    int32_t arg_1008 = eax_1
    int32_t ecx = data_26a7764
    int32_t var_4 = 0
    int32_t arg_4[0x401]
    
    if (ecx s> 0)
        do
            int32_t* ecx_1 = data_26a6760
            int32_t* esi_1 = ecx_1
            
            if (ecx_1[1] != 0x20)
                sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, 
                    "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_1 == 0)
                ecx_1 = sub_520800(eax_1, edx, ecx_1, 0)
                
                if (*esi_1 == 0)
                    sub_509540(esi_1)
            
            void* esi_2 = **esi_1
            void* ebx_1 = *(esi_2 + 4)
            int32_t* var_1c_1 = ecx_1
            int32_t* eax_5
            int32_t edx_1
            eax_5, edx_1 = sub_4fff30(data_30d7484, 0)
            int32_t* eax_6
            char edx_2
            eax_6, edx_2 = sub_505030(eax_5, edx_1, esi_2, eax_5, ebx_1)
            int32_t edi_1 = (&data_26a6764)[var_4]
            char* ecx_4 = data_26a6760
            void* ebx_3 = ebx_1 * 0xb8 + *esi_2
            
            if (*(ecx_4 + 4) != 0x20)
                sub_4c5870("ptr->assetType == ASSET_TYPE_FAB", &data_83f3d3, "FabDef.cpp", 0xe7, 
                    "FabDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*ecx_4 == 0)
                sub_520800(eax_6, edx_2, ecx_4, 0)
                
                if (*ecx_4 == 0)
                    sub_509540(ecx_4)
            
            void* edi_3 = edi_1 * 0xb8 + ***ecx_4
            int32_t edx_4 = *(ebx_3 + 4)
            __builtin_memcpy(ebx_3, edi_3, 0xb8)
            *(ebx_3 + 4) = edx_4
            int128_t* edi_5 = *(edi_3 + 4)
            
            if (edi_5 == 0)
                sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                    "DefDeepCopyString")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            char* eax_10 = edi_5
            void* edx_5 = &eax_10[1]
            char i
            
            do
                i = *eax_10
                eax_10 = &eax_10[1]
            while (i != 0)
            int128_t* eax_13 = sub_4cce80(eax_10 - edx_5 + 1)
            *(ebx_3 + 4) = eax_13
            edx = sub_5ab990(eax_13, edi_5, eax_10 - edx_5 + 1)
            arg_4[var_4] = ebx_1
            ecx = data_26a7764
            eax_1 = var_4 + 1
            var_4 = eax_1
        while (eax_1 s< ecx)
    
    sub_5ab990(&data_26a6764, &arg_4, ecx << 2)
    sub_540800(data_26a6760)
    int32_t result = sub_56f3d0()
    sub_5a6aba(arg_1008 ^ &var_8)
    return result
}
