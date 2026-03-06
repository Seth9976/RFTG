// 函数名称: sub_4e6d50
// 虚拟地址: 0x4e6d50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e6d50(int32_t arg1, int32_t arg2, char* arg3, char* arg4, char* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fb18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_54
    char const* const var_50
    
    if (data_8bc5ff == 0)
        var_50 = "AssetUtilImportSource"
        var_54 = 0x179
        sub_4c5870("gCompilingMode", &data_83f3d3, "AssetUtils.cpp", var_54, var_50)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t var_3c
    var_50 = &var_3c
    QueryPerformanceCounter(var_50)
    
    if (arg5 u> 0x22)
        var_50 = "AssetTypeGetInfo"
        var_54 = 0xb6
        sub_4c5870("assetType >= 0 && assetType < ASSET_TYPE_COUNT", &data_83f3d3, 
            "AssetTypeRegistry.cpp", var_54, var_50)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* eax_6 = (arg5 << 5) + data_30785d4
    char* var_20 = *(eax_6 + 0x1c)
    char** eax_8
    char* ecx_1
    eax_8, ecx_1 = sub_509140(arg5, arg3)
    sub_508cd0(eax_8)
    var_50 = arg5
    var_54 = ecx_1
    char const* const* var_28 = &var_54
    
    if (arg3 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_54, arg3)
    char* var_18
    int32_t edx_1 = sub_51fbc0(&var_18, var_54)
    int32_t var_8_1 = 0
    char* const var_14 = &data_83f3d3
    var_8_1.b = 1
    char* eax_10 = var_18
    char* ecx_3
    int32_t edx_3
    int32_t* esi_2
    
    if (eax_10 != 0 && *eax_10 != 0)
        var_50 = eax_10
        uint32_t eax_11 = GetFileAttributesA(var_50)
        
        if (eax_11 == 0xffffffff)
            int32_t* eax_16
            eax_16, ecx_3 = sub_4e62c0(arg5)
            esi_2 = eax_16
            edx_3 = sub_4c4590(arg4)
            goto label_4e6eee
        
        char* ecx_2 = var_18
        
        if (ecx_2 == 0)
            ecx_2 = &data_83f3d3
        
        char* edx_2 = var_20
        var_50 = edx_2
        int32_t* eax_12
        eax_12, ecx_3 = sub_504e50(eax_11, edx_2, ecx_2, var_50)
        esi_2 = eax_12
        
        if (esi_2 != 0)
            edx_3 = sub_4c4590(arg4)
            goto label_4e6eee
        
        char* eax_13 = var_18
        
        if (eax_13 == 0)
            eax_13 = &data_83f3d3
        
        var_50 = eax_13
        var_54 = arg3
        sub_4c5680("reimport %s failed to read: '%s'")
    else
        char* const ebx_1
        
        if (arg5 != 0x18)
            char* eax_21 = var_20
            var_50 = eax_21
            int32_t* eax_22
            int32_t edx_4
            eax_22, ecx_3, edx_4 = sub_504e50(eax_21, edx_1, arg4, var_50)
            esi_2 = eax_22
            
            if (esi_2 != 0)
                if (arg5 == 0x19 || arg5 == 5)
                    edx_3 = sub_4c4590(arg4)
                    goto label_4e6eee
                
                var_50 = sub_502ae0(esi_2[1], edx_4, &var_20)
                var_8_1.b = 2
                sub_4c4510(var_50)
                var_8_1.b = 1
                ecx_3, edx_3 = sub_4c43d0(&var_20)
                ebx_1 = var_14
                
                if (ebx_1 == 0 || *ebx_1 == 0)
                    goto label_4e6ef4
                
                var_50 = ecx_3
                var_28 = &var_50
                var_54 = &var_14
                sub_4c4300(&var_50, var_54)
                var_54 = &var_20
                char** eax_26 = sub_4e64f0(var_54)
                var_8_1.b = 3
                char* ecx_12 = var_20
                
                if (ecx_12 == 0)
                    ecx_12 = &data_83f3d3
                
                var_50 = &var_28
                var_50 = sub_51ece0(eax_26, &var_28, ecx_12, var_50)
                var_8_1.b = 4
                sub_4c4510(var_50)
                var_8_1.b = 3
                sub_4c43d0(&var_28)
                var_8_1.b = 1
                ecx_3, edx_3 = sub_4c43d0(&var_20)
                goto label_4e6eee
            
            var_50 = "sys\failureasset"
            var_54 = arg4
            
            if (sub_5a8e80(var_54, var_50) == 0)
                var_50 = arg4
                var_54 = arg3
                sub_4c5680("reimport %s failed to read: '%s'")
        else
            sub_4c4590(arg4)
            int32_t* eax_20
            eax_20, ecx_3, edx_3 = sub_4e62c0(0x18)
            esi_2 = eax_20
        label_4e6eee:
            ebx_1 = var_14
        label_4e6ef4:
            
            if (*(eax_6 + 0xc) == 0)
            label_4e7098:
                var_50 = esi_2
                var_54 = ecx_3
                var_28 = &var_54
                sub_4c4330(arg3, edx_3, &var_54)
                sub_509b00(var_54)
                int32_t eax_35 = *(eax_6 + 4)
                
                if (eax_35 != 0)
                    var_50 = *esi_2
                    var_54 = arg3
                    eax_35(var_54, var_50, eax_2)
                
                var_50 = eax_8
                
                if (sub_4cf840() != 0)
                    int32_t var_2c
                    var_50 = &var_2c
                    QueryPerformanceCounter(var_50)
                    int32_t eax_38 = var_2c
                    char* eax_39 = eax_38 - var_3c
                    int32_t var_38
                    var_50 = sbb.d(var_28, var_38, eax_38 u< var_3c)
                    var_54 = eax_39
                    uint32_t var_58_2 = sub_4c5f30(var_54, var_50)
                    char* var_5c = arg4
                    sub_4c5680("Imported source asset %s %d ms")
                    var_8_1.b = 0
                    sub_4c43d0(&var_14)
                    int32_t var_8_3 = 0xffffffff
                    sub_4c43d0(&var_18)
                    int32_t* eax_41
                    eax_41.b = 1
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_41
            else if (ebx_1 == 0 || *ebx_1 == 0)
                sub_4fed70(esi_2)
                var_50 = arg3
                var_54 = "reimport failed because no source path: '%s'"
                sub_4c5680(var_54)
            else
                var_50 = ebx_1
                uint32_t eax_28
                char* ecx_15
                eax_28, ecx_15 = GetFileAttributesA(var_50)
                
                if (eax_28 != 0xffffffff)
                    var_50 = ecx_15
                    var_50 = ebx_1
                    bool cond:0_1 = *ebx_1 == 0
                    var_28 = &var_50
                    
                    if (not(cond:0_1))
                        void* eax_31 = sub_4c4060(&var_50)
                        *(eax_31 + 4) += 1
                    
                    int32_t eax_32 = *(eax_6 + 0xc)
                    var_54 = esi_2
                    char eax_33
                    eax_33, edx_3, ecx_3 = eax_32(arg3, var_54)
                    
                    if (eax_33 != 0)
                        goto label_4e7098
                    
                    sub_4fed70(esi_2)
                    var_50 = arg3
                    var_54 = "reimport failed: '%s'"
                    sub_4c5680(var_54)
                else
                    sub_4fed70(esi_2)
                    var_50 = "sys\failureasset"
                    var_54 = arg4
                    
                    if (sub_5a8e80(var_54, var_50) == 0)
                        var_50 = ebx_1
                        var_54 = "reimport failed because file doesn't exist: '%s'"
                        sub_4c5680(var_54)
    var_8_1.b = 0
    sub_4c43d0(&var_14)
    int32_t var_8_2 = 0xffffffff
    sub_4c43d0(&var_18)
    int32_t* eax_14
    eax_14.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14
}
