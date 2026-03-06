// 函数名称: sub_4eb180
// 虚拟地址: 0x4eb180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4eb180(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_2 = sub_4f3760(*(eax + 0x30))
    int128_t* ebx = eax_2
    int128_t* var_10 = ebx
    
    if (ebx == 0)
        return eax_2
    
    *(ebx + 0x64) = fconvert.s(float.t(1))
    *(ebx + 0x58) = fconvert.s(fconvert.t(data_8c4d34))
    __builtin_memcpy(ebx + 0x2c, arg2, 0x20)
    int32_t edx = *(ebx + 0x44)
    *(ebx + 0x68) = ebx[4].d
    int32_t ecx_1 = *(ebx + 0x48)
    *(ebx + 0x6c) = edx
    *ebx = arg1
    ebx[7].d = ecx_1
    *(ebx + 0x75) = 1
    int32_t* eax_4 = sub_466320(arg1)
    int32_t* var_c = eax_4
    int32_t var_18 = 0
    
    if (eax_4[1] s> 0)
        int32_t var_14_1 = 0
        
        while (true)
            int32_t* edi_2 = *eax_4 + var_14_1
            
            if (data_8c35fc s<= 0x6e)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_2 = *(data_8c35f8 + 0x1b8)
            void* eax_5 = *(esi_2 + 0xc)
            
            if (eax_5 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_5 + 0x10) != 0xa)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
                    "AttribMap.cpp", 0x195, "AttribMapGetBool")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_2 = *edi_2
            int32_t eax_6 = 0
            int32_t ecx_3
            
            if (edx_2 s<= 0)
            label_4eb287:
                ecx_3 = *(esi_2 + 0x24)
            else
                int32_t* ecx_2 = edi_2[1]
                
                while (*ecx_2 != 0x6e)
                    eax_6 += 1
                    ecx_2 = &ecx_2[2]
                    
                    if (eax_6 s>= edx_2)
                        goto label_4eb287
                
                ecx_3 = ecx_2[1]
            
            if (ecx_3 != 0)
                *(ebx + 0x74) = 1
            
            if (data_8c35fc s<= 0x6f)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* esi_3 = *(data_8c35f8 + 0x1bc)
            void* eax_8 = *(esi_3 + 0xc)
            
            if (eax_8 == 0)
                sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                    "AttribTagGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_8 + 0x10) != 0xa)
                sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
                    "AttribMap.cpp", 0x195, "AttribMapGetBool")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_3 = *edi_2
            int32_t eax_9 = 0
            int32_t ecx_5
            
            if (edx_3 s<= 0)
            label_4eb2dd:
                ecx_5 = *(esi_3 + 0x24)
            else
                int32_t* ecx_4 = edi_2[1]
                
                while (*ecx_4 != 0x6f)
                    eax_9 += 1
                    ecx_4 = &ecx_4[2]
                    
                    if (eax_9 s>= edx_3)
                        goto label_4eb2dd
                
                ecx_5 = ecx_4[1]
            
            if (ecx_5 == 0)
                *(ebx + 0x75) = ecx_5.b
            
            if (edi_2[2] == 0)
                float eax_10 = sub_4f32d0()
                *(eax_10 i+ 0x2dc) = var_18
                *(eax_10 i+ 0x2e4) = var_10
                *(eax_10 i+ 0x2e0) = 0
                sub_4ee330(eax_10)
                ebx = var_10
            
            var_14_1 += 0x134
            int32_t eax_12 = var_18 + 1
            var_18 = eax_12
            
            if (eax_12 s>= var_c[1])
                break
            
            eax_4 = var_c
    
    return ebx
}
