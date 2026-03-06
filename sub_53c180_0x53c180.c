// 函数名称: sub_53c180
// 虚拟地址: 0x53c180
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_53c180()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = data_3079208
    int32_t var_8_1
    
    if (esi == 0 || esi[1] != 0x19)
        var_8_1 = 0
    else
        int32_t eax_1 = sub_466320(esi)
        esi = data_3079208
        var_8_1 = eax_1
    
    int32_t* ebx
    
    if (esi == 0 || esi[1] != 0x1b)
        ebx = nullptr
    else
        ebx = sub_543be0(esi)
    
    LRESULT eax_5
    int32_t ecx_1
    int32_t edx
    eax_5, ecx_1, edx = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
    
    if (var_8_1 != 0)
        char** result
        int32_t ecx_2
        result, ecx_2 = sub_53bc60(eax_5, edx, nullptr, 5)
        
        if (result == 0)
            return result
        
        WPARAM esi_2
        
        if (eax_5 != 0xffffffff)
            esi_2 = eax_5 + 1
        else
            esi_2 = 0
        
        int32_t var_1c_1 = ecx_2
        int32_t* eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_4fff30(data_30d7434, 0)
        sub_505030(eax_7, edx_1, var_8_1, eax_7, esi_2)
        int32_t ecx_4
        void* edx_2
        ecx_4, edx_2 = sub_53c020(esi_2)
        char** result_1 = result
        int32_t var_24_1 = 5
        char* ecx_5 = sub_530b60(esi_2 * 0x134 + *var_8_1, edx_2, ecx_4, &data_8c35ec)
        void* eax_11 = data_3079208
        
        if (eax_11 != 0)
            int32_t eax_12 = *(eax_11 + 4)
            
            if (eax_12 == 0x19)
                int32_t var_18_3 = 0xffffffff
                ecx_5 = sub_538a80(esi_2)
            else if (eax_12 == 0x1b)
                ecx_5 = sub_539d30(esi_2)
        
        data_3078834 = 0
        sub_536c00(ecx_5)
        sub_56e600()
        return sub_56e480()
    
    if (ebx == 0)
        sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", 0x9b2, "EditorAddEmitter")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    WPARAM esi_3
    
    if (eax_5 != 0xffffffff)
        esi_3 = eax_5 + 1
    else
        esi_3 = 0
    
    int32_t var_1c_4 = ecx_1
    int32_t* eax_15
    int32_t edx_3
    eax_15, edx_3 = sub_4fff30(data_315f7c0, 0)
    sub_505030(eax_15, edx_3, ebx, eax_15, esi_3)
    int32_t ecx_7 = esi_3 * 5
    int32_t var_1c_6 = ecx_7
    void** ebx_2 = *ebx + (ecx_7 << 2)
    int32_t* eax_17
    int32_t edx_5
    eax_17, edx_5 = sub_4fff30(data_315f7ec, 0)
    int32_t var_1c_8 = sub_505030(eax_17, edx_5, ebx_2, eax_17, 0)
    int32_t* eax_19
    int32_t edx_6
    eax_19, edx_6 = sub_4fff30(data_315f7ec, 0)
    sub_505030(eax_19, edx_6, ebx_2, eax_19, 0)
    long double x87_r7 = float.t(0)
    float* eax_20 = *ebx_2
    *eax_20 = fconvert.s(x87_r7)
    eax_20[1] = fconvert.s(x87_r7)
    char* ecx_11 = 1
    eax_20[2] = fconvert.s(x87_r7)
    eax_20[3] = 1
    void* eax_21 = *ebx_2
    long double x87_r7_1 = float.t(1)
    *(eax_21 + 0x10) = fconvert.s(x87_r7_1)
    *(eax_21 + 0x1c) = 1
    *(eax_21 + 0x14) = fconvert.s(x87_r7_1)
    *(eax_21 + 0x18) = fconvert.s(x87_r7_1)
    void* eax_22 = data_3079208
    
    if (eax_22 != 0)
        int32_t eax_23 = *(eax_22 + 4)
        
        if (eax_23 == 0x19)
            int32_t var_18_5 = 0xffffffff
            char* ecx_12 = sub_538a80(esi_3)
            data_3078834 = 0
            return sub_536c00(ecx_12)
        
        if (eax_23 == 0x1b)
            ecx_11 = sub_539d30(esi_3)
    
    data_3078834 = 0
    return sub_536c00(ecx_11)
}
