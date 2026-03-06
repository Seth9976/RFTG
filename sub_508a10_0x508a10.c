// 函数名称: sub_508a10
// 虚拟地址: 0x508a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_508a10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ee38
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int128_t* eax_3 = sub_4cce80(0x460)
    int128_t* result = sub_5abfc0(eax_3, 0, 0x460)
    data_30785d4 = eax_3
    int128_t* result_1 = nullptr
    
    if (data_30785d0 s> 0)
        void* edi_1 = &data_26a4620
        
        while (true)
            int32_t eax_4 = *(edi_1 - 8)
            
            if (eax_4 s< 0 || eax_4 s>= 0x23)
                sub_4c5870(
                    "pAssetTableItem->assetType >=0 && pAssetTableItem->assetType < ASSET_TYPE_COUNT", 
                    &data_83f3d3, "AssetTypeRegistry.cpp", 0x9c, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            if (*(edi_1 + 0x10) == 0)
                sub_4c5870("pAssetTableItem->pDefMap != NULL", &data_83f3d3, "AssetTypeRegistry.cpp", 
                    0x9f, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* esi_3 = (eax_4 << 5) + data_30785d4
            *esi_3 = eax_4
            esi_3[7] = *(edi_1 + 0x10)
            esi_3[1] = *(edi_1 - 4)
            esi_3[2] = *edi_1
            esi_3[3] = *(edi_1 + 4)
            esi_3[4] = *(edi_1 + 8)
            int32_t* eax_7 = *(edi_1 + 0x10)
            int32_t var_20 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            int32_t var_8_1 = 0
            int32_t eax_8 = sub_4ffac0(eax_7, 0, &var_20, 0)
            int32_t var_8_2 = 0xffffffff
            sub_5041e0(&var_20)
            esi_3[5] = eax_8
            esi_3[6] = *(edi_1 + 0xc)
            
            if (*(*(edi_1 + 0x10) + 0x1c) != *(edi_1 - 8))
                sub_4c5870("pAssetTableItem->pDefMap->assetType == pAssetTableItem->assetType", 
                    &data_83f3d3, "AssetTypeRegistry.cpp", 0xab, "AssetRegistryInitForApp")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            result = result_1 + 1
            edi_1 += 0x1c
            result_1 = result
            
            if (result s>= data_30785d0)
                break
            
            continue
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
