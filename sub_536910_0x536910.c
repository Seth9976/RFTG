// 函数名称: sub_536910
// 虚拟地址: 0x536910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_536910()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6919b0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_54 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    sub_4c5680("CreateXPack: scanning...")
    sub_51bfc0()
    sub_4c5680("CreateXPack: compiling...")
    int32_t* var_24 = nullptr
    int32_t var_20 = 0
    int32_t var_1c = 0
    int32_t var_c_1 = 0
    int32_t* esi = data_30785d8
    int32_t* ecx = *esi
    int32_t eax_3 = 0
    int32_t* edx_1
    
    while (true)
        edx_1 = *ecx
        
        if (edx_1 != 0)
            break
        
        eax_3 += 1
        ecx = &ecx[1]
        
        if (eax_3 u> esi[1])
            edx_1 = nullptr
            break
    
    int32_t* ebx = edx_1
    int32_t* performanceCount
    
    if (edx_1 != 0)
        while (true)
            int32_t* eax_7 = ebx[2]
            int32_t* edi_1 = ebx
            
            if (eax_7 == 0)
                char* ebx_2 = *ebx
                char* const eax_8 = &data_83f3d3
                
                if (ebx_2 != 0)
                    eax_8 = ebx_2
                
                int32_t eax_9 = sub_519130(eax_8)
                edx_1 = esi[1]
                void* ecx_4 = (edx_1 & eax_9) + 1
                
                if (ecx_4 u<= edx_1)
                    int32_t** eax_11 = *esi + (ecx_4 << 2)
                    
                    do
                        ebx = *eax_11
                        
                        if (ebx != 0)
                            goto label_536a56
                        
                        ecx_4 += 1
                        eax_11 = &eax_11[1]
                    while (ecx_4 u<= edx_1)
                
                ebx = nullptr
            else
                ebx = eax_7
            
        label_536a56:
            int32_t* performanceCount_3 = edi_1[1]
            int32_t eax_12 = performanceCount_3[2]
            performanceCount = performanceCount_3
            
            if (eax_12 != 3 && eax_12 != 4 && eax_12 != 0)
                int32_t eax_13 = *performanceCount_3
                
                if (performanceCount_3[1] == 0)
                    sub_4c5870("assetPtr->assetType != ASSET_TYPE_INVALID", &data_83f3d3, 
                        "Windows\EditorWindow.cpp", 0x11b, "CreateXPack")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (eax_13 == 0)
                    sub_520800(eax_13, edx_1.b, performanceCount_3, eax_13.b)
                
                if (eax_13 != 0 || *performanceCount_3 != 0)
                    int32_t var_58_5 = performanceCount_3[8]
                    sub_4c5680("-----------------------------CreateXPack: adding %s")
                    edx_1 = sub_518190(&var_24, &performanceCount)
                else
                    int32_t var_58_4 = performanceCount_3[8]
                    edx_1 = sub_4c5680("can't compile %s")
            
            if (ebx == 0)
                break
            
            esi = data_30785d8
    
    sub_4c5680("CreateXPack: writing...")
    int32_t var_58_1 = *(data_27e7fd0 + 4)
    char* var_3c
    sub_4c4a50(&var_3c, "XBin\%s")
    var_c_1.b = 1
    char* const ebx_1 = var_3c
    
    if (ebx_1 == 0)
        ebx_1 = &data_83f3d3
    
    char* eax_4 = sub_5a8f10(ebx_1, 0x2e)
    uint32_t eax_5
    
    if (eax_4 != 0)
        eax_5 = sub_5a9697(eax_4, ".zip")
    
    int32_t* eax_6
    
    if (eax_4 == 0 || eax_5 != 0)
        sub_4ffc50(ebx_1)
        int32_t edx_4
        eax_6, edx_4 = sub_5a898b(ebx_1, "wb")
        
        if (eax_6 != 0)
            char eax_15 = sub_4cf480(eax_6, edx_4, eax_6, &var_24, 1)
            sub_5a8c61(eax_6)
            
            if (eax_15 == 0)
                char* const var_58_9 = ebx_1
                sub_5a9d3d()
            
            eax_6.b = eax_15
        else
            eax_6.b = 0
    else
        eax_6 = sub_4cf570(&var_24, ebx_1)
    
    if (eax_6.b == 0)
        MessageBoxA(data_3078818, "Failed to write xpack file", "Error", MB_OK)
    
    QueryPerformanceCounter(&performanceCount)
    int32_t* performanceCount_2 = performanceCount
    int32_t var_34
    int32_t var_2c
    uint32_t var_60_1 = sub_4c5f30(performanceCount_2 - performanceCount_1, 
        sbb.d(var_34, var_2c, performanceCount_2 u< performanceCount_1))
    sub_4c5680("CreateXPack: done (%d ms)")
    var_c_1.b = 0
    char* eax_18 = var_3c
    
    if (eax_18 != 0 && *eax_18 != 0)
        void* eax_20 = sub_4c4060(&var_3c)
        int32_t temp2_1 = *(eax_20 + 4)
        *(eax_20 + 4) -= 1
        
        if (temp2_1 == 1)
            int32_t esi_3 = *(eax_20 + 0xc) + 0x10
            sub_4f4430(eax_20, sub_4f4380(esi_3), esi_3)
    
    int32_t var_c_2 = 0xffffffff
    int32_t* result = sub_5041e0(&var_24)
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
