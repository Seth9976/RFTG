// 函数名称: sub_46f700
// 虚拟地址: 0x46f700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_46f700(int32_t arg1, char* arg2, void* arg3, int128_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: void var_44
    void var_44
    int32_t eax_1 = __security_cookie ^ &var_44
    void* eax_3
    int32_t edx
    eax_3, edx = sub_46b2b0(arg2)
    void* eax_5 = sx.d(*(arg3 + 0x1ec0)) - 3
    
    if (eax_5 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGShared.cpp", 0xca9, "player_choose_place")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void var_3c
    void* edi_1
    
    switch (eax_5)
        case nullptr, 1
            void* ecx = data_27e7a40
            *(eax_3 + 0x1c) = 6
            edi_1 = *(ecx + 0x548)
            
            if (*(edi_1 + 0x2c078) == 1 && *(edi_1 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                edx = sub_4d66f0(&var_3c)
        case 2, 3
            if (arg6 != 0xffffffff)
                edx = 0xb8
            
            if (arg6 == 0xffffffff || *(*(arg3 + arg6 * 0x14 + 0x46c) + 4) != 0xb8)
                int32_t eax_8
                eax_8, edx = sub_4a43c0(arg2, 1)
                *(eax_3 + 0x568) = eax_8
                *(eax_3 + 0x28) = 0
            else
                *(eax_3 + 0x568) = 0
                *(eax_3 + 0x28) = 1
            
            eax_5 = data_27e7a40
            *(eax_3 + 0x1c) = 0xa
            edi_1 = *(eax_5 + 0x548)
            
            if (*(edi_1 + 0x2c078) == 1 && *(edi_1 + 0x210) == 0)
                sub_4d6480(data_307bef0)
                edx = sub_4d66f0(&var_3c)
    
    *(edi_1 + 0x214) = 0
    *(edi_1 + 0x2c078) = 0
    *(edi_1 + 0x210) = 2
    sub_46aca0(eax_3 + 0xaa4, edx, arg4, arg5)
    *(eax_3 + 0x1a08) = arg5
    sub_5ab990(eax_3 + 0xfc4, arg4, arg5 << 2)
    *(eax_3 + 0x1a04) = arg5
    sub_5a6aba(eax_1 ^ &var_44)
    return 0
}
