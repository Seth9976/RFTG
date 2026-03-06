// 函数名称: sub_5321d0
// 虚拟地址: 0x5321d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5321d0(int32_t arg1, int32_t arg2, int32_t* arg3, char** arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690258
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7fcc
    
    if (eax_3 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_5 = sub_5324c0(arg3, *(eax_3 + 0x18))
    eax_5[1] = arg5
    *eax_5 = arg4
    __builtin_memcpy(&eax_5[2], arg3, 0x20)
    char** var_38
    char** esi_1
    
    if (arg4 != 0)
        if (arg4[1] != 9)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_38 = arg4
        esi_1 = arg4
    else
        esi_1 = sub_50a390(9)
        var_38 = esi_1
    
    if (*esi_1 == 0)
        sub_5094d0(esi_1, 0, 1)
    
    char* eax_8 = *esi_1
    esi_1[7] = &esi_1[7][1]
    int32_t* eax_9 = *eax_8
    int32_t* var_44 = eax_9
    int32_t var_8_1 = 0
    int32_t result = eax_5[0xa]
    int32_t var_40 = 0
    
    if (*eax_9 s> 0)
        int32_t var_3c_1 = 0
        
        while (true)
            int32_t* edi_2 = eax_9[1] + var_3c_1
            int32_t var_34 = *arg3
            int32_t var_20_1 = *edi_2
            int32_t var_1c_1 = edi_2[1]
            int32_t var_18_1 = edi_2[2]
            float var_7c[0x4]
            float* eax_12 = sub_465a90(&var_7c, fconvert.s(fconvert.t(edi_2[4])), 
                fconvert.s(fconvert.t(edi_2[5])), fconvert.s(fconvert.t(edi_2[6])))
            float var_30_1 = *eax_12
            int32_t var_2c_1 = eax_12[1]
            int32_t var_28_1 = eax_12[2]
            int32_t var_24_1 = eax_12[3]
            void var_6c
            sub_531e10(arg3, &var_6c)
            int32_t* ecx_5 = data_27e7fd0
            char eax_14
            
            if (ecx_5 != 0)
                eax_14 = (*(*ecx_5 + 0x34))(eax_2)
            
            if (ecx_5 == 0 || eax_14 == 0)
                int32_t eax_17 = edi_2[7]
                
                if (eax_17 == 0)
                    sub_5333d0(edi_2[0xa], &var_6c)
                else if (eax_17 != 1)
                    sub_4c5870("Halt", &data_83f3d3, "MarkerSet.cpp", 0x7c, "MarkerCreate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
            else
                if (edi_2[7] != 0)
                    sub_4c5870("Halt", &data_83f3d3, "MarkerSet.cpp", 0xda, "MarkerCreateForEditMode")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_5333d0(edi_2[0xa], &var_6c)
            
            var_3c_1 += 0x34
            int32_t eax_23 = var_40 + 1
            var_40 = eax_23
            
            if (eax_23 s>= *var_44)
                break
            
            eax_9 = var_44
        
        esi_1 = var_38
    
    if (*(data_27e7bbc + 0x2c) != 0)
        int32_t* ecx_8 = data_27e7fd0
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 0x34))(eax_2)
    
    esi_1[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
