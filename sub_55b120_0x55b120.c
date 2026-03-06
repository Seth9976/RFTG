// 函数名称: sub_55b120
// 虚拟地址: 0x55b120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_55b120(float arg1 @ ecx)
{
    // 第一条实际指令: float var_4a4
    float var_4a4
    int32_t var_c = __security_cookie ^ &var_4a4
    int32_t esi
    int32_t var_4ac = esi
    int32_t edi
    int32_t var_4b0 = edi
    uint32_t SDKVersion = 0x20
    var_4a4 = arg1
    struct IDirect3D9 eax_2 = Direct3DCreate9(SDKVersion)
    void* edi_1 = data_3079200
    *(edi_1 + 4) = eax_2
    *(edi_1 + 0x70) = arg1
    
    if (eax_2 == 0)
        SDKVersion = "Dx9AttachToWindow"
        sub_4c5870("gDx9Interface->pD3D", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x4fe, 
            SDKVersion)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t var_498
    sub_5598e0(&var_498)
    int32_t* SDKVersion_1 = *(edi_1 + 4)
    int32_t edx = *(*SDKVersion_1 + 0x10)
    SDKVersion = SDKVersion_1
    int32_t ebx_1 = 0
    int32_t var_4a0 = 1
    int32_t esi_3 = 0
    float esi_4
    
    if (edx(SDKVersion) == 0)
    label_55b1fc:
        esi_4 = var_4a4
    else
        while (true)
            int32_t* eax_6 = *(data_3079200 + 4)
            void var_464
            (*(*eax_6 + 0x14))(eax_6, esi_3, 0, &var_464)
            char var_264[0x248]
            
            if (sub_5a8e80(&var_264, "PerfHUD") != 0)
                ebx_1 = esi_3
                esi_4 = 2.80259693e-45f
                break
            
            int32_t* eax_9 = *(data_3079200 + 4)
            esi_3 += 1
            
            if (esi_3 u>= (*(*eax_9 + 0x10))(eax_9))
                goto label_55b1fc
    
    int32_t var_48c
    
    if (var_48c != 0)
        int32_t* eax_12 = *(data_3079200 + 4)
        int32_t var_47c
        
        if ((*(*eax_12 + 0x2c))(eax_12, ebx_1, esi_4, 0x16, var_47c, var_48c, 0) s< 0)
            int32_t var_4b8_3 = var_48c
            sub_4c5680("Dx Multisampling %d not supported")
            int32_t var_48c_1 = 0
    
    void* ecx_5 = data_3079200
    int32_t* eax_15 = *(ecx_5 + 4)
    void* var_4b8_4 = ecx_5 + 8
    int32_t var_49c
    int32_t* var_4bc_3 = &var_49c
    int32_t var_4c0_3 = 0x40
    int32_t ebx
    int32_t var_4c4_2 = ebx
    
    if ((*(*eax_15 + 0x40))(eax_15, ebx_1, esi_4) s< 0)
        sub_4c5870("HaltMsg", "Failed to Create DirectX Device", "Windows\WindowsGraphics.cpp", 0x52a, 
            "Dx9AttachToWindow")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* ecx_8 = data_3079200
    int32_t* eax_18 = *(ecx_8 + 8)
    (*(*eax_18 + 0x38))(eax_18, 0, ecx_8 + 0x50)
    void* ecx_10 = data_3079200
    int32_t* eax_20 = *(ecx_10 + 0x50)
    (*(*eax_20 + 0x14))(eax_20, 0, 0, ecx_10 + 0x54)
    void* ecx_12 = data_3079200
    int32_t* eax_22 = *(ecx_12 + 8)
    (*(*eax_22 + 0xa0))(eax_22, ecx_12 + 0x58)
    long double x87_r7 = float.t(var_49c)
    
    if (var_49c s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    int32_t edx_10 = var_498
    var_4a4 = fconvert.s(x87_r7)
    long double x87_r7_1 = float.t(var_498)
    
    if (edx_10 s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    void* eax_24 = data_3079200
    float edx_11 = fconvert.s(x87_r7_1)
    *(eax_24 + 0x5c) = var_4a4
    *(eax_24 + 0x60) = edx_11
    int32_t esi_5 = 0
    
    while (true)
        void* eax_25 = &data_be9a50
        
        while (true)
            if (eax_25 s>= 0xbe9ad8)
                sub_4c5870("Halt", &data_83f3d3, "VertexFormat.cpp", 0x115, "VertexFormatGetDefMap")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*eax_25 == esi_5)
                void* eax_26 = *(eax_25 + 4)
                edx_11 = sub_55ad10(eax_26, edx_11, esi_5, eax_26)
                esi_5 += 1
                
                if (esi_5 s< 0x11)
                    break
                
                int32_t* eax_27 = *(data_3079200 + 8)
                (*(*eax_27 + 0xe4))(eax_27, 0x16, 1)
                int32_t* eax_29 = *(data_3079200 + 8)
                (*(*eax_29 + 0xe4))(eax_29, 0x89, 0)
                int32_t* eax_31 = *(data_3079200 + 8)
                (*(*eax_31 + 0xe4))(eax_31, 7, 1)
                int32_t* eax_33 = *(data_3079200 + 8)
                
                if ((*(*eax_33 + 0xe4))(eax_33, 0xa1, 1) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x542, 
                        "Dx9AttachToWindow")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                if (*(data_27e7fd0 + 0x21) != 0)
                    int32_t* eax_38 = *(data_3079200 + 8)
                    SDKVersion = fconvert.s(fconvert.t(-1f))
                    (*(*eax_38 + 0x114))(eax_38, 0, 8, SDKVersion)
                
                int32_t result = sub_55b030()
                int32_t var_1c
                sub_5a6aba(var_1c ^ &SDKVersion)
                return result
            
            eax_25 += 8
}
