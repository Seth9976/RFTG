// 函数名称: sub_46d560
// 虚拟地址: 0x46d560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_46d560(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_2 = sub_46b2b0(arg2)
    void* eax_3 = sub_46b2b0(arg2)
    int32_t edx = *(eax_3 + 0x1f54)
    int32_t ecx = 0
    
    if (edx s> 0)
        void* eax_4 = eax_3 + 0x1f44
        
        while (*eax_4 != arg1)
            ecx += 1
            eax_4 += 8
            
            if (ecx s>= edx)
                goto label_46d5af
    
    int32_t i
    
    if (edx s> 0 && ecx != 0xffffffff)
        int32_t eax_7 = *(eax_2 + 0x1f54)
        
        if (eax_7 s<= 0)
            sub_4c5870("pgui.numRolesChosen > 0", &data_83f3d3, "..\code\RFTGShared.cpp", 0x767, 
                "RFTGHandleRoleAction")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(eax_2 + 0x1f54) = eax_7 - 1
        *(eax_2 + (ecx << 3) + 0x1f44) = *(eax_2 + ((eax_7 - 1) << 3) + 0x1f44)
        *(eax_2 + (ecx << 3) + 0x1f48) = *(eax_2 + ((eax_7 - 1) << 3) + 0x1f48)
    else
    label_46d5af:
        i = *(eax_2 + 0x1f54)
        int32_t ecx_1 = *(eax_2 + 0x1f58)
        
        if (i s> ecx_1)
            sub_4c5870("pgui.numRolesChosen <= pgui.numRolesToChoose", &data_83f3d3, 
                "..\code\RFTGShared.cpp", 0x750, "RFTGHandleRoleAction")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (i != ecx_1)
            *(eax_2 + (i << 3) + 0x1f44) = arg1
            int32_t edx_2 = *(eax_2 + 0x1f58)
            *(eax_2 + 0x1f54) += 1
            *(eax_2 + (edx_2 << 3) + 0x1f40) = 0
        else if (*(eax_2 + 0x1f49) == 0)
            sub_5a6c10(eax_2 + 0x1f44, eax_2 + 0x1f4c, (ecx_1 << 3) + 0xfffffff8)
            *(eax_2 + (*(eax_2 + 0x1f58) << 3) + 0x1f3c) = arg1
            *(eax_2 + (*(eax_2 + 0x1f58) << 3) + 0x1f40) = 0
        else
            *(eax_2 + 0x1f4c) = arg1
            *(eax_2 + 0x1f50) = 0
    
    if (arg1 == 0)
        i = 0
        
        if (*(eax_2 + 0x1f54) s> 0)
            void* ecx_4 = eax_2 + 0x1f48
            
            do
                *ecx_4 = 0
                i += 1
                ecx_4 += 8
            while (i s< *(eax_2 + 0x1f54))
    
    void* esi_1 = *(data_27e7a40 + 0x548)
    i.b = *(eax_2 + 0x1f54) != *(eax_2 + 0x1f58)
    char var_3d = i.b
    int32_t ecx_6
    
    if (*(esi_1 + 0x2c078) == 1 && i.b == 0 && *(esi_1 + 0x210) == 0)
        sub_4d6480(data_307bef0)
        void var_3c
        i, ecx_6 = sub_4d66f0(&var_3c)
        i.b = var_3d
    
    ecx_6.b = i.b == 0
    *(esi_1 + 0x214) = ecx_6.b
    *(esi_1 + 0x210) = 0
    *(esi_1 + 0x2c078) = i.b
    sub_5a6aba(eax_1 ^ &var_44)
    return i
}
