// 函数名称: sub_531640
// 虚拟地址: 0x531640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_531640(char** arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_690288
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_84
    int32_t eax_2 = __security_cookie ^ &var_84
    int32_t __saved_edi
    int32_t var_94 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_5 = data_27e7fcc
    char** esi = arg1
    
    if (eax_5 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_7 = sub_531c40(*(eax_5 + 0x10))
    eax_7[1] = 0
    eax_7[2] = 0
    *eax_7 = esi
    char** var_78
    
    if (esi != 0)
        if (esi[1] != 7)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_78 = esi
    else
        esi = sub_50a390(7)
        var_78 = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    int32_t* ebx = **esi
    int32_t var_c_1 = 0
    float var_70 = fconvert.s(fconvert.t(-0.300000012f))
    float var_6c = fconvert.s(fconvert.t(-0.800000012f))
    float var_68 = fconvert.s(fconvert.t(-0.600000024f))
    float var_50 = var_70
    float var_4c = var_6c
    float var_48 = var_68
    float* eax_10 = sub_4131a0(&var_50, &var_70)
    float var_5c = *eax_10
    int32_t var_58 = eax_10[1]
    int32_t var_54 = eax_10[2]
    int128_t* eax_12 = sub_533500(&var_5c, eax_7)
    int32_t result = eax_7[4]
    eax_7[3] = eax_12
    int32_t i_1 = 0
    
    if (*ebx s> 0)
        int32_t var_74_1 = 0
        int32_t i
        
        do
            int32_t* edi_2 = ebx[1] + var_74_1
            int32_t ecx_3 = *edi_2
            int32_t edx_2 = edi_2[1]
            float var_98_1 = fconvert.s(fconvert.t(edi_2[5]))
            int32_t result_1 = result
            int32_t var_28_1 = ecx_3
            int32_t var_24_1 = edx_2
            int32_t var_20_1 = edi_2[2]
            float* eax_15 = sub_465a90(&var_50, fconvert.s(fconvert.t(edi_2[3])), 
                fconvert.s(fconvert.t(edi_2[4])), var_98_1)
            float var_38_1 = *eax_15
            int32_t var_34_1 = eax_15[1]
            int32_t edx_4 = eax_15[3]
            int32_t var_30_1 = eax_15[2]
            int32_t var_2c_1 = edx_4
            sub_5321d0(result, edx_4, &result_1, edi_2[6], result)
            var_74_1 += 0x1c
            i = i_1 + 1
            i_1 = i
        while (i s< *ebx)
    
    var_78[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_84)
    return result
}
