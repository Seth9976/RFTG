// 函数名称: sub_45a9d0
// 虚拟地址: 0x45a9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_45a9d0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_699852
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3166a68 & 1) == 0)
        data_3166a68.d |= 1
        int32_t var_8_1 = 0
        data_3166a64 = sub_4f5220(data_307c16c, "bg")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166a68 & 2) == 0)
        data_3166a68.d |= 2
        int32_t var_8_3 = 1
        data_3166a60 = sub_4f5220(data_307c16c, "Heading")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166a68 & 4) == 0)
        data_3166a68.d |= 4
        int32_t var_8_5 = 2
        data_3166a5c = sub_4f5220(data_307c16c, "btnStart")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166a68 & 8) == 0)
        data_3166a68.d |= 8
        int32_t var_8_7 = 3
        data_3166a58 = sub_4f5220(data_307c16c, "btnJoin")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166a68 & 0x10) == 0)
        data_3166a68.d |= 0x10
        int32_t var_8_9 = 4
        data_3166a54 = sub_4f5220(data_307c16c, "btnCreate")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166a68 & 0x20) == 0)
        data_3166a68.d |= 0x20
        int32_t var_8_11 = 5
        data_3166a50 = sub_4f5220(data_307c16c, "btnAccept")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_3166a68 & 0x40) == 0)
        data_3166a68.d |= 0x40
        int32_t var_8_13 = 6
        data_3166a4c = sub_4f5220(data_307c16c, "btnDecline")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_3166a68 & 0x80) == 0)
        data_3166a68.d |= 0x80
        int32_t var_8_15 = 7
        data_3166a48 = sub_4f5220(data_307c16c, "btnLeave")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_3166a68.d & 0x100) == 0)
        data_3166a68.d |= 0x100
        int32_t var_8_17 = 8
        data_3166a44 = sub_4f5220(data_307c16c, "imgPanel")
        int32_t var_8_18 = 0xffffffff
    
    if ((data_3166a68.d & 0x200) == 0)
        data_3166a68.d |= 0x200
        int32_t var_8_19 = 9
        data_3166a40 = sub_4f5220(data_307c16c, "txtTimeRemainingLabel")
        int32_t var_8_20 = 0xffffffff
    
    if ((data_3166a68.d & 0x400) == 0)
        data_3166a68.d |= 0x400
        int32_t var_8_21 = 0xa
        data_3166a3c = sub_4f5220(data_307c16c, "btnBack")
        int32_t var_8_22 = 0xffffffff
    
    if ((data_3166a68.d & 0x800) == 0)
        data_3166a68.d |= 0x800
        int32_t var_8_23 = 0xb
        data_3166a38 = sub_4f5220(data_307c16c, "imgNext")
        int32_t var_8_24 = 0xffffffff
    
    if ((data_3166a68.d & 0x1000) == 0)
        data_3166a68.d |= 0x1000
        int32_t var_8_25 = 0xc
        data_3166a34 = sub_4f5220(data_307c16c, "btnNext")
        int32_t var_8_26 = 0xffffffff
    
    void* eax_21 = data_27e7a40
    data_307d080 = 6
    data_307d084 = *(eax_21 + 0x2c495c)
    data_307d088 = *(eax_21 + 0x2c4960)
    sub_407670()
    int32_t ecx_6
    int80_t st0
    ecx_6, st0 = sub_482140(arg1)
    int32_t var_24_1 = 0
    int32_t* const var_28_14 = &data_84074c
    int32_t var_30 = ecx_6
    sub_4f8070(arg1, fconvert.s(fconvert.t(data_8c4d34)), 0xffffffff)
    sub_4075c0()
    void* eax_22
    char edx_6
    eax_22, edx_6 = sub_4fc3d0(&data_be1cb8, arg1)
    *(eax_22 + 0x2c) = sub_45a8c0
    int32_t var_24_2 = 1
    sub_4fa4e0(arg1, data_3166a64, edx_6)
    int128_t* eax_26 = sub_4f6e90(data_3166a60, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_26 + 0x64) = *eax_26 + 1
    sub_4c4590("GAME INFO")
    float edx_7 = data_3166a64
    int32_t var_24_3 = 1
    *(eax_26 + 0x151) = 1
    char edx_8 = sub_4fa4e0(arg1, edx_7, edx_7.b)
    int32_t var_2c = 1
    char edx_9 = sub_4fa4e0(arg1, data_3166a5c, edx_8)
    int32_t var_34_1 = 1
    sub_4fa4e0(arg1, data_3166a58, edx_9)
    float edx_10 = data_3166a54
    int32_t var_3c = 1
    char edx_11 = sub_4fa4e0(arg1, edx_10, edx_10.b)
    int32_t var_44 = 1
    char edx_12 = sub_4fa4e0(arg1, data_3166a50, edx_11)
    int32_t var_4c = 1
    sub_4fa4e0(arg1, data_3166a4c, edx_12)
    float edx_13 = data_3166a48
    int32_t var_54 = 1
    char edx_14 = sub_4fa4e0(arg1, edx_13, edx_13.b)
    int32_t var_5c = 1
    char edx_15 = sub_4fa4e0(arg1, data_3166a40, edx_14)
    int32_t var_24_4 = 0
    sub_4fa4e0(arg1, data_3166a44, edx_15)
    sub_4fa2c0(arg1, 1)
    int128_t* eax_40 = sub_4f6e90(data_3166a3c, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    int32_t edi_3 = data_3166a34
    *(eax_40 + 0x22) = 0
    int128_t* eax_42 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    void* edx_16 = data_27e7a40
    *(eax_42 + 0x22) = 0
    void* eax_43 = *(edx_16 + 0x548)
    
    if (eax_43 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    uint32_t edx_17 = zx.d(*(*(eax_43 + 0x45844) + 0x1ec2) == 0)
    uint32_t var_24_5 = edx_17
    sub_4fa4e0(arg1, data_3166a34, edx_17.b)
    void* eax_48 = *(data_27e7a40 + 0x548)
    
    if (eax_48 != 0)
        float edx_19 = data_3166a38
        eax_48.b = *(*(eax_48 + 0x45844) + 0x1ec2) == 0
        uint32_t var_24_6 = zx.d(eax_48.b)
        int32_t result = sub_4fa4e0(arg1, edx_19, edx_19.b)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
