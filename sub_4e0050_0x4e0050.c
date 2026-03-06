// 函数名称: sub_4e0050
// 虚拟地址: 0x4e0050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4e0050(char** arg1, float* arg2, float* arg3, float arg4, void* arg5)
{
    // 第一条实际指令: int32_t* eax = sub_4e7410(arg1)
    int32_t* eax = sub_4e7410(arg1)
    int32_t* result = *eax
    
    if (result == 0)
        return result
    
    int32_t i_1 = 0
    
    if (*result s> 0)
        int32_t var_c_1 = 0
        int32_t i
        
        do
            void* ecx_2 = result[1] + var_c_1
            
            if (data_8bd344 s<= 0x53)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* ebx_1 = data_8bd340
            void* esi_1 = *(ebx_1 + 0x14c)
            void* eax_1 = *(esi_1 + 0xc)
            
            if (eax_1 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_1 + 0x10) != 0xf)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", 
                    &data_83f3d3, "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_2 = *(ecx_2 + 0x5c)
            int32_t edx_1 = 0
            float edi_3
            
            if (eax_2 s<= 0)
            label_4e00cd:
                edi_3 = *(esi_1 + 0x24)
            else
                int32_t* edi_2 = *(ecx_2 + 0x60)
                
                while (*edi_2 != 0x53)
                    edx_1 += 1
                    edi_2 = &edi_2[2]
                    
                    if (edx_1 s>= eax_2)
                        goto label_4e00cd
                
                edi_3 = edi_2[1]
            
            float esi_2 = arg4
            
            if (esi_2 == 0)
                esi_2 = edi_3
                
                if (edi_3 == 0)
                    esi_2 = data_30d739c
            
            if (data_8bd344 s<= 0x54)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* ebx_2 = *(ebx_1 + 0x150)
            void* edx_2 = *(ebx_2 + 0xc)
            
            if (edx_2 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(edx_2 + 0x10) != 0xf)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_ASSET_PTR", 
                    &data_83f3d3, "AttribMap.cpp", 0x1e9, "AttribMapGetAssetPtr")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_3 = 0
            int32_t edi_5
            
            if (eax_2 s<= 0)
            label_4e0121:
                edi_5 = *(ebx_2 + 0x24)
            else
                int32_t* edi_4 = *(ecx_2 + 0x60)
                
                while (*edi_4 != 0x54)
                    edx_3 += 1
                    edi_4 = &edi_4[2]
                    
                    if (edx_3 s>= eax_2)
                        goto label_4e0121
                
                edi_5 = edi_4[1]
            
            float* var_40_1
            float* var_3c_1
            int32_t var_38_1
            void* var_34_1
            float* eax_4
            
            if (edi_5 == 0)
                var_34_1 = arg5
                var_38_1 = 1
                float var_14
                eax_4 = &var_14
                var_3c_1 = &var_14
                var_14 = esi_2
                var_40_1 = arg3
            else
                var_34_1 = arg5
                eax_4 = arg3
                var_38_1 = 2
                float var_20
                var_3c_1 = &var_20
                var_20 = esi_2
                int32_t var_1c_1 = edi_5
                var_40_1 = eax_4
            
            sub_4deb80(eax_4, arg2, ecx_2, var_40_1, var_3c_1, var_38_1, var_34_1)
            result = *eax
            var_c_1 += 0x140
            i = i_1 + 1
            i_1 = i
        while (i s< *result)
    
    return sub_4df840(result, arg5, arg1, arg2)
}
