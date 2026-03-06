// 函数名称: sub_509140
// 虚拟地址: 0x509140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_509140(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_508c10()
    char eax_3
    char* ecx
    int32_t edx
    eax_3, ecx, edx = sub_509d20(arg2)
    char const* const var_30
    
    if (eax_3 == 0)
        var_30 = "AssetPtrFromPath"
        sub_4c5870("AssetPathIsValid(assetPath)", &data_83f3d3, "AssetCatalog.cpp", 0x9c, var_30)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*arg2 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    var_30 = ecx
    char** ecx_3 = &var_30
    char const* const* result_2 = &var_30
    sub_4c4330(arg2, edx, ecx_3)
    char** result = sub_508fc0(ecx_3)
    
    if (result == 0)
        if (sub_508bc0(arg2) != arg1)
            var_30 = "AssetPtrFromPath"
            sub_4c5870("AssetTypeFromPath(assetPath) == assetType", &data_83f3d3, "AssetCatalog.cpp", 
                0xab, var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char** result_1
        char* ecx_4
        result_1, ecx_4 = sub_50a8e0(data_30785d8 + 0xc)
        result_1[1] = arg1
        result_2 = result_1
        int32_t edx_1 = sub_4c4590(&data_83f3d3)
        var_30 = ecx_4
        char const* const* var_14 = &var_30
        sub_4c4330(arg2, edx_1, &var_30)
        var_30 = sub_50a1e0(&var_14, var_30)
        int32_t var_8_1 = 0
        sub_4c4510(var_30)
        int32_t var_8_2 = 0xffffffff
        sub_4c43d0(&var_14)
        result_1[2] = 0
        
        if (sub_50a4a0(&result_1[8]) != 0)
            var_30 = "AssetPtrFromPath"
            sub_4c5870("gpAssetAppData->pathToAssetMap.GetAt(pAssetNew->assetPath) == NULL", 
                &data_83f3d3, "AssetCatalog.cpp", 0xb3, var_30)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_30 = &result_2
        sub_50a530(&result_1[8], var_30)
        result = result_1
    else if (result[1] != arg1)
        var_30 = "AssetPtrFromPath"
        sub_4c5870("pAssetExisting->assetType == assetType", &data_83f3d3, "AssetCatalog.cpp", 0xa7, 
            var_30)
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
