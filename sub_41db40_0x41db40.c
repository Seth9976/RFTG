// 函数名称: sub_41db40
// 虚拟地址: 0x41db40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41db40(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6912be
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316548c & 1) == 0)
        data_316548c.d |= 1
        int32_t var_8_1 = 0
        int32_t eax_4 = sub_4f5220(data_307c668, "anim")
        int32_t* ecx_1 = data_307c660
        data_315fa90 = eax_4
        int32_t eax_5 = sub_4f5220(ecx_1, "anim")
        int32_t* edx_1 = data_307c68c
        data_315fa94 = eax_5
        data_315fa98 = sub_4f5220(edx_1, "anim")
        int32_t eax_8 = sub_4f5220(data_307c658, "anim")
        int32_t* ecx_2 = data_307c680
        data_315fa9c = eax_8
        int32_t eax_9 = sub_4f5220(ecx_2, "anim")
        int32_t* edx_2 = data_307c678
        data_315faa0 = eax_9
        data_315faa4 = sub_4f5220(edx_2, "anim")
        int32_t eax_12 = sub_4f5220(data_307c670, "anim")
        int32_t* ecx_3 = data_307c694
        data_315faa8 = eax_12
        int32_t eax_13 = sub_4f5220(ecx_3, "anim")
        int32_t* edx_3 = data_307c650
        data_315faac = eax_13
        data_315fab0 = sub_4f5220(edx_3, "anim")
        int32_t eax_16 = sub_4f5220(data_307c688, "anim")
        int32_t* ecx_4 = data_307c66c
        data_315fab4 = eax_16
        int32_t eax_17 = sub_4f5220(ecx_4, "anim")
        int32_t* edx_4 = data_307c664
        data_315fab8 = eax_17
        data_315fabc = sub_4f5220(edx_4, "anim")
        int32_t eax_20 = sub_4f5220(data_307c690, "anim")
        int32_t* ecx_5 = data_307c65c
        data_315fac0 = eax_20
        int32_t eax_21 = sub_4f5220(ecx_5, "anim")
        int32_t* edx_5 = data_307c684
        data_315fac4 = eax_21
        data_315fac8 = sub_4f5220(edx_5, "anim")
        int32_t eax_24 = sub_4f5220(data_307c67c, "anim")
        int32_t* ecx_6 = data_307c674
        data_315facc = eax_24
        int32_t eax_25 = sub_4f5220(ecx_6, "anim")
        int32_t* edx_6 = data_307c698
        data_315fad0 = eax_25
        data_315fad4 = sub_4f5220(edx_6, "anim")
        data_315fad8 = sub_4f5220(data_307c654, "anim")
        int32_t var_8_2 = 0xffffffff
    
    if (arg1 s< 0)
        sub_4c5870("role >= 0", &data_83f3d3, "..\code\RFTGClient.cpp", 0xbec, "GetRoleZoomAnim")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 u< 0x13)
        fsbase->NtTib.ExceptionList = ExceptionList
        return (&data_315fa90)[arg1]
    
    sub_4c5870("role < ARRAYSIZE(anims)", &data_83f3d3, "..\code\RFTGClient.cpp", 0xbed, 
        "GetRoleZoomAnim")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
