// 函数名称: sub_55f270
// 虚拟地址: 0x55f270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55f270(void* arg1, int32_t* arg2 @ edi, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_194
    int32_t* var_194
    int32_t var_c = __security_cookie ^ &var_194
    int32_t ebx
    int32_t var_198 = ebx
    int32_t esi
    int32_t var_19c = esi
    var_194 = arg3
    int128_t* eax_3 = sub_563dc0(arg1 + 0x40)
    int128_t* var_180 = eax_3
    *eax_3 = 5
    int32_t i = 0x1e
    void* var_190 = eax_3 + 0x34
    int32_t i_1 = 0x1e
    void* var_18c = eax_3 + 0x54
    char const* const var_1ac
    
    do
        int32_t* edx_1 = var_194
        int32_t edi = *edx_1
        int32_t eax_5 = 0
        
        if (edi s> 0)
            int32_t* ecx_2 = edx_1[1]
            
            do
                int32_t edx_2 = *ecx_2
                
                if (edx_2 u>= i - 2 && edx_2 u<= i + 3)
                    int32_t var_1a4_1 = 0x34
                    char var_1a8_1 = 0
                    var_1ac = var_18c
                    sub_5abfc0(var_1ac, var_1a8_1, var_1a4_1)
                    int32_t* esi_2 = var_194
                    *(var_18c + 4) = sub_530e40(esi_2, i - 2)
                    *(var_18c + 8) = sub_530e40(esi_2, i_1 - 1)
                    *(var_18c + 0xc) = sub_530e40(esi_2, i_1)
                    int32_t eax_9 = sub_530e40(esi_2, i_1 + 1)
                    int32_t eax_10 = sub_530e40(esi_2, i_1 + 2)
                    int32_t eax_12 = sub_55f1e0(sub_530e40(esi_2, i_1 + 3), eax_9, eax_10)
                    *(var_18c + 0x2c) = fconvert.s(float.t(0))
                    *(var_18c + 0x30) = fconvert.s(fconvert.t(15f))
                    *var_18c = eax_12
                    *(var_18c + 0x10) = fconvert.s(fconvert.t(-0.5f))
                    *(var_18c + 0x14) = 0
                    *(var_18c + 0x18) = 1
                    char* eax_13 = *(arg1 + 4)
                    void* edx_7 = *eax_13
                    var_1ac = eax_13
                    
                    if ((*(edx_7 + 0x5c))(var_1ac, var_18c, var_190) s>= 0)
                        i = i_1
                        break
                    
                    char const* const var_1a4_4 = "Dx11GraphicsInterface::CreateMaterialBuffer"
                    int32_t var_1a8_4 = 0x46e
                    var_1ac = "Windows\WindowsDx11.cpp"
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, var_1ac, var_1a8_4, var_1a4_4)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_5 += 1
                ecx_2 = &ecx_2[2]
            while (eax_5 s< edi)
        
        var_190 += 4
        var_18c += 0x34
        i += 6
        i_1 = i
    while (i s< 0x4e)
    
    int32_t ebx_4 = data_8bd344
    int32_t var_174
    __builtin_memset(&var_174, 0, 0x28)
    int32_t var_150 = 1
    int32_t var_15c = 1
    
    if (ebx_4 s<= 5)
        char const* const var_1a4_3 = "AttribTagGetField"
        int32_t var_1a8_3 = 0x8b
        var_1ac = "AttribMap.cpp"
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, var_1ac, 
            var_1a8_3, var_1a4_3)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_10 = data_8bd340
    void* esi_4 = *(edi_10 + 0x14)
    void* eax_18 = *(esi_4 + 0xc)
    
    if (eax_18 == 0)
        char const* const var_1a4_5 = "AttribTagGetDefMap"
        int32_t var_1a8_5 = 0x1fe
        var_1ac = "AttribMap.cpp"
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, var_1ac, var_1a8_5, var_1a4_5)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_18 + 0x10) != 1)
        char const* const var_1a4_6 = "AttribMapGetInt"
        int32_t var_1a8_6 = 0x177
        var_1ac = "AttribMap.cpp"
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, var_1ac, 
            var_1a8_6, var_1a4_6)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edx_8 = var_194
    int32_t eax_21 = *edx_8
    int32_t ecx_7 = 0
    int32_t edx_10
    
    if (eax_21 s<= 0)
    label_55f511:
        edx_10 = *(esi_4 + 0x24)
    else
        int32_t* edx_9 = edx_8[1]
        
        while (*edx_9 != 5)
            ecx_7 += 1
            edx_9 = &edx_9[2]
            
            if (ecx_7 s>= eax_21)
                goto label_55f511
        
        edx_10 = edx_9[1]
    
    int32_t var_170 = edx_10
    
    if (ebx_4 s<= 0x19)
        char const* const var_1a4_7 = "AttribTagGetField"
        int32_t var_1a8_7 = 0x8b
        var_1ac = "AttribMap.cpp"
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, var_1ac, 
            var_1a8_7, var_1a4_7)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_5 = *(edi_10 + 0x64)
    void* ecx_8 = *(esi_5 + 0xc)
    
    if (ecx_8 == 0)
        char const* const var_1a4_8 = "AttribTagGetDefMap"
        int32_t var_1a8_8 = 0x1fe
        var_1ac = "AttribMap.cpp"
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, var_1ac, var_1a8_8, var_1a4_8)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_8 + 0x10) != 1)
        char const* const var_1a4_9 = "AttribMapGetInt"
        int32_t var_1a8_9 = 0x177
        var_1ac = "AttribMap.cpp"
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, var_1ac, 
            var_1a8_9, var_1a4_9)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_9 = 0
    int32_t edx_13
    
    if (eax_21 s<= 0)
    label_55f5e2:
        edx_13 = *(esi_5 + 0x24)
    else
        int32_t* edx_12 = var_194[1]
        
        while (*edx_12 != 0x19)
            ecx_9 += 1
            edx_12 = &edx_12[2]
            
            if (ecx_9 s>= eax_21)
                goto label_55f5e2
        
        edx_13 = edx_12[1]
    
    float var_164 = fconvert.s(float.t(0))
    var_174 = edx_13
    int32_t var_16c = 0
    int32_t var_168 = 0
    
    if (ebx_4 s<= 0x18)
        char const* const var_1a4_10 = "AttribTagGetField"
        int32_t var_1a8_10 = 0x8b
        var_1ac = "AttribMap.cpp"
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, var_1ac, 
            var_1a8_10, var_1a4_10)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_6 = *(edi_10 + 0x60)
    void* ecx_10 = *(esi_6 + 0xc)
    
    if (ecx_10 == 0)
        char const* const var_1a4_11 = "AttribTagGetDefMap"
        int32_t var_1a8_11 = 0x1fe
        var_1ac = "AttribMap.cpp"
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, var_1ac, var_1a8_11, var_1a4_11)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_10 + 0x10) != 4)
        char const* const var_1a4_12 = "AttribMapGetFloat"
        int32_t var_1a8_12 = 0x1bd
        var_1ac = "AttribMap.cpp"
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_FLOAT", &data_83f3d3, var_1ac, 
            var_1a8_12, var_1a4_12)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_11 = 0
    float var_190_1
    
    if (eax_21 s<= 0)
    label_55f6ca:
        var_190_1 = *(esi_6 + 0x24)
    else
        int32_t* edx_15 = var_194[1]
        
        while (*edx_15 != 0x18)
            ecx_11 += 1
            edx_15 = &edx_15[2]
            
            if (ecx_11 s>= eax_21)
                goto label_55f6ca
        
        var_190_1 = fconvert.s(fconvert.t(edx_15[1]))
    
    int128_t* edi_11 = var_180
    float var_160 = fconvert.s(fconvert.t(var_190_1))
    char* eax_29 = *(arg1 + 4)
    bool cond:0 = *(arg1 + 0x68) != 0
    uint32_t var_158 = 0
    int32_t ecx_12
    ecx_12.b = cond:0
    int32_t var_154 = ecx_12
    int32_t edx_17 = *(*eax_29 + 0x58)
    int32_t* var_1a8_13 = &var_174
    var_1ac = eax_29
    
    if (edx_17(var_1ac, var_1a8_13, edi_11 + 0x1f4, arg2) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x480, 
            "Dx11GraphicsInterface::CreateMaterialBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_32 = *(arg1 + 4)
    int32_t var_178_2 = 1
    
    if ((*(*eax_32 + 0x58))(eax_32, &var_180, edi_11 + 0x1f8) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x485, 
            "Dx11GraphicsInterface::CreateMaterialBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_5abfc0(&var_158, 0, 0x34)
    
    if (data_8bd344 s<= 0)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx_5 = data_8bd340
    void* esi_8 = *ebx_5
    void* eax_37 = *(esi_8 + 0xc)
    
    if (eax_37 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_37 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_40 = *arg2
    int32_t ecx_15 = 0
    int32_t edx_20
    
    if (eax_40 s<= 0)
    label_55f882:
        edx_20 = *(esi_8 + 0x24)
    else
        int32_t* edx_19 = arg2[1]
        
        while (*edx_19 != 0)
            ecx_15 += 1
            edx_19 = &edx_19[2]
            
            if (ecx_15 s>= eax_40)
                goto label_55f882
        
        edx_20 = edx_19[1]
    
    ecx_15.b = edx_20 != 0
    bool cond:1 = data_8bd344 s> 6
    var_158 = zx.d(ecx_15.b)
    
    if (not(cond:1))
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_9 = ebx_5[6]
    void* ecx_17 = *(esi_9 + 0xc)
    
    if (ecx_17 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_17 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_18 = 0
    int32_t edx_23
    
    if (eax_40 s<= 0)
    label_55f95f:
        edx_23 = *(esi_9 + 0x24)
    else
        int32_t* edx_22 = arg2[1]
        
        while (*edx_22 != 6)
            ecx_18 += 1
            edx_22 = &edx_22[2]
            
            if (ecx_18 s>= eax_40)
                goto label_55f95f
        
        edx_23 = edx_22[1]
    
    int32_t var_150_1 = edx_23
    
    if (data_8bd344 s<= 1)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_10 = ebx_5[1]
    void* ecx_19 = *(esi_10 + 0xc)
    
    if (ecx_19 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_19 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_20 = 0
    int32_t edx_26
    
    if (eax_40 s<= 0)
    label_55fa33:
        edx_26 = *(esi_10 + 0x24)
    else
        int32_t* edx_25 = arg2[1]
        
        while (*edx_25 != 1)
            ecx_20 += 1
            edx_25 = &edx_25[2]
            
            if (ecx_20 s>= eax_40)
                goto label_55fa33
        
        edx_26 = edx_25[1]
    
    ecx_20.b = edx_26 != 0
    uint32_t var_154_1 = zx.d(ecx_20.b)
    
    if (data_8bd344 s<= 0xa)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_11 = ebx_5[0xa]
    void* ecx_22 = *(esi_11 + 0xc)
    
    if (ecx_22 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_22 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_23 = 0
    int32_t edx_29
    
    if (eax_40 s<= 0)
    label_55fb0d:
        edx_29 = *(esi_11 + 0x24)
    else
        int32_t* edx_28 = arg2[1]
        
        while (*edx_28 != 0xa)
            ecx_23 += 1
            edx_28 = &edx_28[2]
            
            if (ecx_23 s>= eax_40)
                goto label_55fb0d
        
        edx_29 = edx_28[1]
    
    ecx_23.b = edx_29 != 0
    uint32_t var_14c = zx.d(ecx_23.b)
    
    if (data_8bd344 s<= 0x10)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_12 = ebx_5[0x10]
    void* ecx_25 = *(esi_12 + 0xc)
    
    if (ecx_25 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_25 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_26 = 0
    char edx_32
    
    if (eax_40 s<= 0)
    label_55fbee:
        edx_32 = (*(esi_12 + 0x24)).b
    else
        void* edx_31 = arg2[1]
        
        while (*edx_31 != 0x10)
            ecx_26 += 1
            edx_31 += 8
            
            if (ecx_26 s>= eax_40)
                goto label_55fbee
        
        edx_32 = (*(edx_31 + 4)).b
    
    char var_148 = edx_32
    
    if (data_8bd344 s<= 0x11)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_13 = ebx_5[0x11]
    void* ecx_27 = *(esi_13 + 0xc)
    
    if (ecx_27 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_27 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_28 = 0
    char edx_35
    
    if (eax_40 s<= 0)
    label_55fcc0:
        edx_35 = (*(esi_13 + 0x24)).b
    else
        void* edx_34 = arg2[1]
        
        while (*edx_34 != 0x11)
            ecx_28 += 1
            edx_34 += 8
            
            if (ecx_28 s>= eax_40)
                goto label_55fcc0
        
        edx_35 = (*(edx_34 + 4)).b
    
    char var_147 = edx_35
    
    if (data_8bd344 s<= 0xb)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_14 = ebx_5[0xb]
    void* ecx_29 = *(esi_14 + 0xc)
    
    if (ecx_29 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_29 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_30 = 0
    int32_t edx_38
    
    if (eax_40 s<= 0)
    label_55fd92:
        edx_38 = *(esi_14 + 0x24)
    else
        int32_t* edx_37 = arg2[1]
        
        while (*edx_37 != 0xb)
            ecx_30 += 1
            edx_37 = &edx_37[2]
            
            if (ecx_30 s>= eax_40)
                goto label_55fd92
        
        edx_38 = edx_37[1]
    
    int32_t var_144 = edx_38
    
    if (data_8bd344 s<= 0xc)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_15 = ebx_5[0xc]
    void* ecx_31 = *(esi_15 + 0xc)
    
    if (ecx_31 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_31 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_32 = 0
    int32_t edx_41
    
    if (eax_40 s<= 0)
    label_55fe64:
        edx_41 = *(esi_15 + 0x24)
    else
        int32_t* edx_40 = arg2[1]
        
        while (*edx_40 != 0xc)
            ecx_32 += 1
            edx_40 = &edx_40[2]
            
            if (ecx_32 s>= eax_40)
                goto label_55fe64
        
        edx_41 = edx_40[1]
    
    int32_t var_140 = edx_41
    
    if (data_8bd344 s<= 0xd)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_16 = ebx_5[0xd]
    void* ecx_33 = *(esi_16 + 0xc)
    
    if (ecx_33 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_33 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_34 = 0
    int32_t edx_44
    
    if (eax_40 s<= 0)
    label_55ff36:
        edx_44 = *(esi_16 + 0x24)
    else
        int32_t* edx_43 = arg2[1]
        
        while (*edx_43 != 0xd)
            ecx_34 += 1
            edx_43 = &edx_43[2]
            
            if (ecx_34 s>= eax_40)
                goto label_55ff36
        
        edx_44 = edx_43[1]
    
    int32_t var_13c = edx_44
    
    if (data_8bd344 s<= 0xe)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_17 = ebx_5[0xe]
    void* ecx_35 = *(esi_17 + 0xc)
    
    if (ecx_35 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_35 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_36 = 0
    int32_t edx_47
    
    if (eax_40 s<= 0)
    label_56000e:
        edx_47 = *(esi_17 + 0x24)
    else
        int32_t* edx_46 = arg2[1]
        
        while (*edx_46 != 0xe)
            ecx_36 += 1
            edx_46 = &edx_46[2]
            
            if (ecx_36 s>= eax_40)
                goto label_56000e
        
        edx_47 = edx_46[1]
    
    int32_t var_138 = edx_47
    
    if (data_8bd344 s<= 0x12)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_18 = ebx_5[0x12]
    void* ecx_37 = *(esi_18 + 0xc)
    
    if (ecx_37 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_37 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_38 = 0
    int32_t edx_50
    
    if (eax_40 s<= 0)
    label_5600e0:
        edx_50 = *(esi_18 + 0x24)
    else
        int32_t* edx_49 = arg2[1]
        
        while (*edx_49 != 0x12)
            ecx_38 += 1
            edx_49 = &edx_49[2]
            
            if (ecx_38 s>= eax_40)
                goto label_5600e0
        
        edx_50 = edx_49[1]
    
    int32_t var_134 = edx_50
    
    if (data_8bd344 s<= 0x13)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_19 = ebx_5[0x13]
    void* ecx_39 = *(esi_19 + 0xc)
    
    if (ecx_39 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_39 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_40 = 0
    int32_t edx_53
    
    if (eax_40 s<= 0)
    label_5601b2:
        edx_53 = *(esi_19 + 0x24)
    else
        int32_t* edx_52 = arg2[1]
        
        while (*edx_52 != 0x13)
            ecx_40 += 1
            edx_52 = &edx_52[2]
            
            if (ecx_40 s>= eax_40)
                goto label_5601b2
        
        edx_53 = edx_52[1]
    
    int32_t var_130 = edx_53
    
    if (data_8bd344 s<= 0x14)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_20 = ebx_5[0x14]
    void* ecx_41 = *(esi_20 + 0xc)
    
    if (ecx_41 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_41 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_42 = 0
    int32_t edx_56
    
    if (eax_40 s<= 0)
    label_560284:
        edx_56 = *(esi_20 + 0x24)
    else
        int32_t* edx_55 = arg2[1]
        
        while (*edx_55 != 0x14)
            ecx_42 += 1
            edx_55 = &edx_55[2]
            
            if (ecx_42 s>= eax_40)
                goto label_560284
        
        edx_56 = edx_55[1]
    
    int32_t var_12c = edx_56
    
    if (data_8bd344 s<= 0x15)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_21 = ebx_5[0x15]
    void* ecx_43 = *(esi_21 + 0xc)
    
    if (ecx_43 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_43 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_44 = 0
    int32_t edx_59
    
    if (eax_40 s<= 0)
    label_56035e:
        edx_59 = *(esi_21 + 0x24)
    else
        int32_t* edx_58 = arg2[1]
        
        while (*edx_58 != 0x15)
            ecx_44 += 1
            edx_58 = &edx_58[2]
            
            if (ecx_44 s>= eax_40)
                goto label_56035e
        
        edx_59 = edx_58[1]
    
    int32_t* eax_81 = *(var_190_1 i+ 4)
    int32_t var_128 = edx_59
    
    if ((*(*eax_81 + 0x54))(eax_81, &var_158, var_18c + 0x1fc) s< 0)
        sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x499, 
            "Dx11GraphicsInterface::CreateMaterialBuffer")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t var_124
    sub_5abfc0(&var_124, 0, 0x108)
    int32_t ebx_6 = data_8bd344
    
    if (ebx_6 s<= 2)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edi_13 = data_8bd340
    void* esi_22 = *(edi_13 + 8)
    void* eax_86 = *(esi_22 + 0xc)
    
    if (eax_86 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(eax_86 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_89 = *arg2
    int32_t ecx_46 = 0
    int32_t edx_64
    
    if (eax_89 s<= 0)
    label_5604ad:
        edx_64 = *(esi_22 + 0x24)
    else
        int32_t* edx_63 = arg2[1]
        
        while (*edx_63 != 2)
            ecx_46 += 1
            edx_63 = &edx_63[2]
            
            if (ecx_46 s>= eax_89)
                goto label_5604ad
        
        edx_64 = edx_63[1]
    
    ecx_46.b = edx_64 != 0
    var_124 = zx.d(ecx_46.b)
    int32_t var_120 = 0
    
    if (ebx_6 s<= 9)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_23 = *(edi_13 + 0x24)
    void* ecx_48 = *(esi_23 + 0xc)
    
    if (ecx_48 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_48 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_49 = 0
    int32_t edx_67
    
    if (eax_89 s<= 0)
    label_560594:
        edx_67 = *(esi_23 + 0x24)
    else
        int32_t* edx_66 = arg2[1]
        
        while (*edx_66 != 9)
            ecx_49 += 1
            edx_66 = &edx_66[2]
            
            if (ecx_49 s>= eax_89)
                goto label_560594
        
        edx_67 = edx_66[1]
    
    ecx_49.b = edx_67 != 0
    uint32_t var_11c = zx.d(ecx_49.b)
    
    if (ebx_6 s<= 0x17)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_24 = *(edi_13 + 0x5c)
    void* ecx_51 = *(esi_24 + 0xc)
    
    if (ecx_51 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_51 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_52 = 0
    int32_t edx_70
    
    if (eax_89 s<= 0)
    label_560670:
        edx_70 = *(esi_24 + 0x24)
    else
        int32_t* edx_69 = arg2[1]
        
        while (*edx_69 != 0x17)
            ecx_52 += 1
            edx_69 = &edx_69[2]
            
            if (ecx_52 s>= eax_89)
                goto label_560670
        
        edx_70 = edx_69[1]
    
    int32_t var_110 = edx_70
    
    if (ebx_6 s<= 3)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_25 = *(edi_13 + 0xc)
    void* ecx_53 = *(esi_25 + 0xc)
    
    if (ecx_53 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_53 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_54 = 0
    int32_t ebx_7
    
    if (eax_89 s<= 0)
    label_56074d:
        ebx_7 = *(esi_25 + 0x24)
    else
        int32_t* edx_72 = arg2[1]
        
        while (*edx_72 != 3)
            ecx_54 += 1
            edx_72 = &edx_72[2]
            
            if (ecx_54 s>= eax_89)
                goto label_56074d
        
        ebx_7 = edx_72[1]
    
    int32_t var_118 = ebx_7
    
    if (data_8bd344 s<= 4)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_26 = *(data_8bd340 + 0x10)
    void* ecx_56 = *(esi_26 + 0xc)
    
    if (ecx_56 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_56 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_57 = 0
    int32_t edi_15
    
    if (eax_89 s<= 0)
    label_56082d:
        edi_15 = *(esi_26 + 0x24)
    else
        int32_t* edx_74 = arg2[1]
        
        while (*edx_74 != 4)
            ecx_57 += 1
            edx_74 = &edx_74[2]
            
            if (ecx_57 s>= eax_89)
                goto label_56082d
        
        edi_15 = edx_74[1]
    
    int32_t var_114 = edi_15
    
    if (data_8bd344 s<= 0x16)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_27 = *(data_8bd340 + 0x58)
    void* ecx_59 = *(esi_27 + 0xc)
    
    if (ecx_59 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_59 + 0x10) != 1)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
            "AttribMap.cpp", 0x177, "AttribMapGetInt")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_60 = 0
    char edx_77
    
    if (eax_89 s<= 0)
    label_56090d:
        edx_77 = (*(esi_27 + 0x24)).b
    else
        void* edx_76 = arg2[1]
        
        while (*edx_76 != 0x16)
            ecx_60 += 1
            edx_76 += 8
            
            if (ecx_60 s>= eax_89)
                goto label_56090d
        
        edx_77 = (*(edx_76 + 4)).b
    
    char var_100 = edx_77
    
    if (data_8bd344 s<= 0x4d)
        sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
            "AttribMap.cpp", 0x8b, "AttribTagGetField")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi_28 = *(data_8bd340 + 0x134)
    void* ecx_62 = *(esi_28 + 0xc)
    
    if (ecx_62 == 0)
        sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, "AttribTagGetDefMap")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*(ecx_62 + 0x10) != 0xa)
        sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_BOOL", &data_83f3d3, 
            "AttribMap.cpp", 0x195, "AttribMapGetBool")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_63 = 0
    int32_t edx_80
    
    if (eax_89 s<= 0)
    label_5609ee:
        edx_80 = *(esi_28 + 0x24)
    else
        int32_t* edx_79 = arg2[1]
        
        while (*edx_79 != 0x4d)
            ecx_63 += 1
            edx_79 = &edx_79[2]
            
            if (ecx_63 s>= eax_89)
                goto label_5609ee
        
        edx_80 = edx_79[1]
    
    if (edx_80 == 0)
        if (ebx_7 - 3 u> 7)
            int32_t var_10c_5 = ebx_7
        else
            switch (ebx_7)
                case 3
                    int32_t var_10c_1 = 5
                case 4
                    int32_t var_10c_2 = 6
                case 5, 6, 7, 8
                    var_10c_5 = ebx_7
                case 9
                    int32_t var_10c_3 = 7
                case 0xa
                    int32_t var_10c_4 = 8
        
        if (edi_15 - 3 u> 7)
            int32_t var_108_5 = edi_15
        else
            switch (edi_15)
                case 3
                    int32_t var_108_1 = 5
                case 4
                    int32_t var_108_2 = 6
                case 5, 6, 7, 8
                    var_108_5 = edi_15
                case 9
                    int32_t var_108_3 = 7
                case 0xa
                    int32_t var_108_4 = 8
        
        int32_t var_104_2 = edx_70
    else
        if (data_8bd344 s<= 0x4e)
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* ebx_8 = data_8bd340
        void* esi_29 = *(ebx_8 + 0x138)
        void* ecx_64 = *(esi_29 + 0xc)
        
        if (ecx_64 == 0)
            sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                "AttribTagGetDefMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(ecx_64 + 0x10) != 1)
            sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
                "AttribMap.cpp", 0x177, "AttribMapGetInt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_65 = 0
        int32_t edx_83
        
        if (eax_89 s<= 0)
        label_560ad0:
            edx_83 = *(esi_29 + 0x24)
        else
            int32_t* edx_82 = arg2[1]
            
            while (*edx_82 != 0x4e)
                ecx_65 += 1
                edx_82 = &edx_82[2]
                
                if (ecx_65 s>= eax_89)
                    goto label_560ad0
            
            edx_83 = edx_82[1]
        
        int32_t edi_16 = data_8bd344
        int32_t var_10c = edx_83
        
        if (edi_16 s<= 0x4f)
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* esi_30 = *(ebx_8 + 0x13c)
        void* ecx_66 = *(esi_30 + 0xc)
        
        if (ecx_66 == 0)
            sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                "AttribTagGetDefMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(ecx_66 + 0x10) != 1)
            sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
                "AttribMap.cpp", 0x177, "AttribMapGetInt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_67 = 0
        int32_t edx_86
        
        if (eax_89 s<= 0)
        label_560bad:
            edx_86 = *(esi_30 + 0x24)
        else
            int32_t* edx_85 = arg2[1]
            
            while (*edx_85 != 0x4f)
                ecx_67 += 1
                edx_85 = &edx_85[2]
                
                if (ecx_67 s>= eax_89)
                    goto label_560bad
            
            edx_86 = edx_85[1]
        
        int32_t var_108 = edx_86
        
        if (edi_16 s<= 0x50)
            sub_4c5870("(int)tag >= 0 && (int)tag < pAttribTable->lookupTableSize", &data_83f3d3, 
                "AttribMap.cpp", 0x8b, "AttribTagGetField")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* esi_31 = *(ebx_8 + 0x140)
        void* ecx_68 = *(esi_31 + 0xc)
        
        if (ecx_68 == 0)
            sub_4c5870("pAttribField->pDefMap", &data_83f3d3, "AttribMap.cpp", 0x1fe, 
                "AttribTagGetDefMap")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(ecx_68 + 0x10) != 1)
            sub_4c5870("AttribTagGetDefMap(pAttribTable, tag)->defType == DT_INT", &data_83f3d3, 
                "AttribMap.cpp", 0x177, "AttribMapGetInt")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_69 = 0
        
        if (eax_89 s<= 0)
        label_560c87:
            int32_t var_104 = *(esi_31 + 0x24)
        else
            int32_t* edx_88 = arg2[1]
            
            while (*edx_88 != 0x50)
                ecx_69 += 1
                edx_88 = &edx_88[2]
                
                if (ecx_69 s>= eax_89)
                    goto label_560c87
            
            int32_t var_104_1 = edx_88[1]
    
    int32_t* eax_120 = *(var_190_1 i+ 4)
    
    if ((*(*eax_120 + 0x50))(eax_120, &var_124, var_18c + 0x200) s>= 0)
        int32_t result = *(var_18c + 0x248)
        int32_t var_24
        sub_5a6aba(var_24 ^ &var_1ac)
        return result
    
    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x4b3, 
        "Dx11GraphicsInterface::CreateMaterialBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
