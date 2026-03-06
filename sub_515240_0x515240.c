// 函数名称: sub_515240
// 虚拟地址: 0x515240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char***sub_515240(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ff58
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fcc
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_5 = *(eax_3 + 8)
    char** var_14
    char** esi
    
    if (arg1 != 0)
        if (arg1[1] != 2)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_14 = arg1
        esi = arg1
    else
        esi = sub_50a390(2)
        var_14 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    char* eax_8 = *esi
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    void* eax_10 = **eax_8
    
    if (eax_10 != 0)
        int32_t edi_1 = *(eax_10 + 8)
        
        if (edi_1 != 0)
            char*** result = sub_518230(eax_5 + 0x10)
            result[0xc4] = 0
            result[0x22] = 0
            result[0x2b] = 0
            *result = arg1
            int32_t var_18_1 = edi_1 << 6
            result[4] = sub_4f43d0()
            result[5] = 0
            result[6] = edi_1
            
            if (edi_1 s< 0 || edi_1 s> edi_1)
                sub_4c5870("size_arg >= 0 && size_arg <= mSizeReserved", &data_83f3d3, 
                    "c:\ax2010\engine\xArray.h", 0x62, "XArray<struct Mat4>::SetSize")
                
                if (IsDebuggerPresent() != 1)
                    sub_4c5a30()
                    noreturn
                
                breakpoint
            
            int32_t eax_14 = result[5]
            int32_t ebx_3 = edi_1 - eax_14
            
            if (ebx_3 s> 0)
                sub_5abfc0(&result[4][eax_14 * 0x10], 0, ebx_3 << 6)
                result[5] += ebx_3
            else if (ebx_3 s< 0)
                result[5] = eax_14 - neg.d(ebx_3)
            
            result[0x1f] = sub_4f43d0()
            result[0x20] = 0
            result[0x21] = edi_1
            
            if (edi_1 s> edi_1)
                sub_4c5870("size_arg >= 0 && size_arg <= mSizeReserved", &data_83f3d3, 
                    "c:\ax2010\engine\xArray.h", 0x62, "XArray<struct Mat4>::SetSize")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_19 = result[0x20]
            int32_t edi_2 = edi_1 - eax_19
            
            if (edi_2 s> 0)
                sub_5abfc0(&result[0x1f][eax_19 * 0x10], 0, edi_2 << 6)
                result[0x20] += edi_2
                var_14[7] -= 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            if (edi_2 s< 0)
                result[0x20] = eax_19 - neg.d(edi_2)
            
            var_14[7] -= 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
    
    esi[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0
}
