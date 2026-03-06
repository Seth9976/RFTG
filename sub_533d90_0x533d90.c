// 函数名称: sub_533d90
// 虚拟地址: 0x533d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_533d90(int32_t* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: void* eax_1 = sub_531280(arg3, arg2, &data_8bd334)
    void* eax_1 = sub_531280(arg3, arg2, &data_8bd334)
    void* ebx = arg4
    *(ebx + 0xc) = eax_1
    int32_t edx = *arg1
    int32_t ecx = 0
    uint32_t eax_3
    
    if (edx s> 0)
        int32_t* ebx_1 = arg1[1]
        
        do
            if (*ebx_1 == arg3)
                switch (*(eax_1 + 0x10) - 1)
                    case 0, 3, 9
                        int32_t eax_13 = sub_531120(arg1, arg3, eax_1)
                        *(arg4 + 0x10) = eax_13
                        return eax_13
                    case 0xe
                        goto label_533e38
                    case 0x27
                        int32_t* eax_16 = sub_531120(arg1, arg3, data_30d72f0)
                        
                        if (eax_16 != 0)
                            uint32_t eax_19 = sub_4e3990(*eax_16, eax_16[1], eax_16[2], eax_16[3])
                            *(arg4 + 0x10) = eax_19
                            return eax_19
                        
                        sub_4c5870("pColor", &data_83f3d3, "Material.cpp", 0x1e1, 
                            "sMaterialRenderStateValueFromConstant")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    case 0x28
                        eax_3 = sub_531120(arg1, arg3, data_30d72f4)
                        
                        if (eax_3 == 0)
                            goto label_533e00_2
                        
                        uint32_t eax_15 = sub_4db680(*eax_3)
                        *(arg4 + 0x10) = eax_15
                        return eax_15
                
                sub_4c5870("Halt", &data_83f3d3, "Material.cpp", 0x1e9, 
                    "sMaterialRenderStateValueFromConstant")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            ecx += 1
            ebx_1 = &ebx_1[2]
        while (ecx s< edx)
        
        ebx = arg4
    
    eax_3 = *(eax_1 + 0x10) - 1
    
    if (eax_3 u> 0x28)
    labelid_1:
        return eax_3
    
    eax_3 = zx.d(lookup_table_53404c[eax_3])
    
    switch (eax_3)
        case 0
            if (arg3 s>= 0 && arg3 s< data_8bd344)
                eax_3 = *(*(data_8bd340 + (arg3 << 2)) + 0x24)
                *(ebx + 0x10) = eax_3
            labelid_1:
                return eax_3
            
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 1
        label_533e38:
            int32_t eax_5 = sub_5311d0(arg1, arg3)
            *(arg4 + 0x10) = eax_5
            return eax_5
        case 2
            if (arg3 s< 0 || arg3 s>= data_8bd344)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_3 = *(*(data_8bd340 + (arg3 << 2)) + 0x24)
            
            if (eax_3 == 0)
            label_533e00:
                return eax_3
            
            uint32_t eax_11 = sub_4e3990(*eax_3, *(eax_3 + 4), *(eax_3 + 8), *(eax_3 + 0xc))
            *(ebx + 0x10) = eax_11
            return eax_11
        case 3
            if (arg3 s< 0 || arg3 s>= data_8bd344)
                sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                    "AttribMap.cpp", 0x8b, "AttribTagGetField")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            eax_3 = *(*(data_8bd340 + (arg3 << 2)) + 0x24)
            
            if (eax_3 == 0)
            label_533e00_1:
                return eax_3
            
            uint32_t eax_7 = sub_4db680(*eax_3)
            *(ebx + 0x10) = eax_7
            return eax_7
        case 4
        label_533e00_2:
            return eax_3
}
