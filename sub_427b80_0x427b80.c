// 函数名称: sub_427b80
// 虚拟地址: 0x427b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_427b80(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_691046
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_307c10c
    
    if ((data_31653fc & 1) == 0)
        data_31653fc.d |= 1
        int32_t var_8_1 = 0
        data_31653f8 = sub_4f5220(esi, "6cost_1a_region")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_31653fc & 2) == 0)
        data_31653fc.d |= 2
        int32_t var_8_3 = 1
        data_31653f4 = sub_4f5220(esi, "6cost_1b_region")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_31653fc & 4) == 0)
        data_31653fc.d |= 4
        int32_t var_8_5 = 2
        data_31653f0 = sub_4f5220(esi, "6cost_2a_region")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_31653fc & 8) == 0)
        data_31653fc.d |= 8
        int32_t var_8_7 = 3
        data_31653ec = sub_4f5220(esi, "6cost_2b_region")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_31653fc & 0x10) == 0)
        data_31653fc.d |= 0x10
        int32_t var_8_9 = 4
        data_31653e8 = sub_4f5220(esi, "6cost_2c_region")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_31653fc & 0x20) == 0)
        data_31653fc.d |= 0x20
        int32_t var_8_11 = 5
        data_31653e4 = sub_4f5220(esi, "6cost_2d_region")
        int32_t var_8_12 = 0xffffffff
    
    if ((data_31653fc & 0x40) == 0)
        data_31653fc.d |= 0x40
        int32_t var_8_13 = 6
        data_31653e0 = sub_4f5220(esi, "6cost_2e_region")
        int32_t var_8_14 = 0xffffffff
    
    if ((data_31653fc & 0x80) == 0)
        data_31653fc.d |= 0x80
        int32_t var_8_15 = 7
        data_31653dc = sub_4f5220(esi, "6cost_3a_region")
        int32_t var_8_16 = 0xffffffff
    
    if ((data_31653fc.d & 0x100) == 0)
        data_31653fc.d |= 0x100
        int32_t var_8_17 = 8
        data_31653d8 = sub_4f5220(esi, "6cost_3b_region")
        int32_t var_8_18 = 0xffffffff
    
    if ((data_31653fc.d & 0x200) == 0)
        data_31653fc.d |= 0x200
        int32_t var_8_19 = 9
        data_31653d4 = sub_4f5220(esi, "6cost_3c_region")
        int32_t var_8_20 = 0xffffffff
    
    if ((data_31653fc.d & 0x400) == 0)
        data_31653fc.d |= 0x400
        int32_t var_8_21 = 0xa
        data_31653d0 = sub_4f5220(esi, "6cost_3d_region")
        int32_t var_8_22 = 0xffffffff
    
    if ((data_31653fc.d & 0x800) == 0)
        data_31653fc.d |= 0x800
        int32_t var_8_23 = 0xb
        data_31653cc = sub_4f5220(esi, "6cost_3e_region")
        int32_t var_8_24 = 0xffffffff
    
    if ((data_31653fc.d & 0x1000) == 0)
        data_31653fc.d |= 0x1000
        int32_t var_8_25 = 0xc
        data_31653c8 = sub_4f5220(esi, "6cost_4a_region")
        int32_t var_8_26 = 0xffffffff
    
    if ((data_31653fc.d & 0x2000) == 0)
        data_31653fc.d |= 0x2000
        int32_t var_8_27 = 0xd
        data_31653c4 = sub_4f5220(esi, "6cost_4b_region")
        int32_t var_8_28 = 0xffffffff
    
    if ((data_31653fc.d & 0x4000) == 0)
        data_31653fc.d |= 0x4000
        int32_t var_8_29 = 0xe
        data_31653c0 = sub_4f5220(esi, "6cost_4c_region")
        int32_t var_8_30 = 0xffffffff
    
    if ((data_31653fc.d & 0x8000) == 0)
        data_31653fc.d |= 0x8000
        int32_t var_8_31 = 0xf
        data_31653bc = sub_4f5220(esi, "6cost_4d_region")
        int32_t var_8_32 = 0xffffffff
    
    if ((data_31653fc.d & 0x10000) == 0)
        data_31653fc.d |= 0x10000
        int32_t var_8_33 = 0x10
        data_31653b8 = sub_4f5220(esi, "special_1a_region")
        int32_t var_8_34 = 0xffffffff
    
    if ((data_31653fc.d & 0x20000) == 0)
        data_31653fc.d |= 0x20000
        int32_t var_8_35 = 0x11
        data_31653b4 = sub_4f5220(esi, "special_1b_region")
        int32_t var_8_36 = 0xffffffff
    
    if ((data_31653fc.d & 0x40000) == 0)
        data_31653fc.d |= 0x40000
        int32_t var_8_37 = 0x12
        data_31653b0 = sub_4f5220(esi, "special_1c_region")
        int32_t var_8_38 = 0xffffffff
    
    if ((data_31653fc.d & 0x80000) == 0)
        data_31653fc.d |= 0x80000
        int32_t var_8_39 = 0x13
        data_31653ac = sub_4f5220(esi, "special_1d_region")
        int32_t var_8_40 = 0xffffffff
    
    if ((data_31653fc.d & 0x100000) == 0)
        data_31653fc.d |= 0x100000
        int32_t var_8_41 = 0x14
        data_31653a8 = sub_4f5220(esi, "special_1e_region")
        int32_t var_8_42 = 0xffffffff
    
    if ((data_31653fc.d & 0x200000) == 0)
        data_31653fc.d |= 0x200000
        int32_t var_8_43 = 0x15
        data_31653a4 = sub_4f5220(esi, "6cost_1a_line1a")
        int32_t var_8_44 = 0xffffffff
    
    if ((data_31653fc.d & &__dos_header) == 0)
        data_31653fc.d |= &__dos_header
        int32_t var_8_45 = 0x16
        data_31653a0 = sub_4f5220(esi, "6cost_1a_line1b")
        int32_t var_8_46 = 0xffffffff
    
    if ((data_31653fc.d & &data_800000) == 0)
        data_31653fc.d |= &data_800000
        int32_t var_8_47 = 0x17
        data_316539c = sub_4f5220(esi, "6cost_1b_line1")
        int32_t var_8_48 = 0xffffffff
    
    if ((data_31653fc.d & 0x1000000) == 0)
        data_31653fc.d |= 0x1000000
        int32_t var_8_49 = 0x18
        data_3165398 = sub_4f5220(esi, "6cost_2a_line1")
        int32_t var_8_50 = 0xffffffff
    
    if ((data_31653fc.d & 0x2000000) == 0)
        data_31653fc.d |= 0x2000000
        int32_t var_8_51 = 0x19
        data_3165394 = sub_4f5220(esi, "6cost_2a_line2")
        int32_t var_8_52 = 0xffffffff
    
    if ((data_31653fc.d & 0x4000000) == 0)
        data_31653fc.d |= 0x4000000
        int32_t var_8_53 = 0x1a
        data_3165390 = sub_4f5220(esi, "6cost_2b_line1")
        int32_t var_8_54 = 0xffffffff
    
    if ((data_31653fc.d & 0x8000000) == 0)
        data_31653fc.d |= 0x8000000
        int32_t var_8_55 = 0x1b
        data_316538c = sub_4f5220(esi, "6cost_2b_line2")
        int32_t var_8_56 = 0xffffffff
    
    if ((data_31653fc.d & 0x10000000) == 0)
        data_31653fc.d |= 0x10000000
        int32_t var_8_57 = 0x1c
        data_3165388 = sub_4f5220(esi, "6cost_2c_line1")
        int32_t var_8_58 = 0xffffffff
    
    if ((data_31653fc.d & 0x20000000) == 0)
        data_31653fc.d |= 0x20000000
        int32_t var_8_59 = 0x1d
        data_3165384 = sub_4f5220(esi, "6cost_2c_line2")
        int32_t var_8_60 = 0xffffffff
    
    if ((data_31653fc.d & 0x40000000) == 0)
        data_31653fc.d |= 0x40000000
        int32_t var_8_61 = 0x1e
        data_3165380 = sub_4f5220(esi, "6cost_2d_line1")
        int32_t var_8_62 = 0xffffffff
    
    if ((data_31653fc.d & 0x80000000) == 0)
        data_31653fc.d |= 0x80000000
        int32_t var_8_63 = 0x1f
        data_316537c = sub_4f5220(esi, "6cost_2d_line2")
        int32_t var_8_64 = 0xffffffff
    
    if ((data_3165378 & 1) == 0)
        data_3165378.d |= 1
        int32_t var_8_65 = 0x20
        data_3165374 = sub_4f5220(esi, "6cost_2e_line1")
        int32_t var_8_66 = 0xffffffff
    
    if ((data_3165378 & 2) == 0)
        data_3165378.d |= 2
        int32_t var_8_67 = 0x21
        data_3165370 = sub_4f5220(esi, "6cost_2e_line2")
        int32_t var_8_68 = 0xffffffff
    
    if ((data_3165378 & 4) == 0)
        data_3165378.d |= 4
        int32_t var_8_69 = 0x22
        data_316536c = sub_4f5220(esi, "6cost_3a_line1")
        int32_t var_8_70 = 0xffffffff
    
    if ((data_3165378 & 8) == 0)
        data_3165378.d |= 8
        int32_t var_8_71 = 0x23
        data_3165368 = sub_4f5220(esi, "6cost_3a_line2")
        int32_t var_8_72 = 0xffffffff
    
    if ((data_3165378 & 0x10) == 0)
        data_3165378.d |= 0x10
        int32_t var_8_73 = 0x24
        data_3165364 = sub_4f5220(esi, "6cost_3a_line3")
        int32_t var_8_74 = 0xffffffff
    
    if ((data_3165378 & 0x20) == 0)
        data_3165378.d |= 0x20
        int32_t var_8_75 = 0x25
        data_3165360 = sub_4f5220(esi, "6cost_3b_line1")
        int32_t var_8_76 = 0xffffffff
    
    if ((data_3165378 & 0x40) == 0)
        data_3165378.d |= 0x40
        int32_t var_8_77 = 0x26
        data_316535c = sub_4f5220(esi, "6cost_3b_line2")
        int32_t var_8_78 = 0xffffffff
    
    if ((data_3165378 & 0x80) == 0)
        data_3165378.d |= 0x80
        int32_t var_8_79 = 0x27
        data_3165358 = sub_4f5220(esi, "6cost_3b_line3")
        int32_t var_8_80 = 0xffffffff
    
    if ((data_3165378.d & 0x100) == 0)
        data_3165378.d |= 0x100
        int32_t var_8_81 = 0x28
        data_3165354 = sub_4f5220(esi, "6cost_3c_line1")
        int32_t var_8_82 = 0xffffffff
    
    if ((data_3165378.d & 0x200) == 0)
        data_3165378.d |= 0x200
        int32_t var_8_83 = 0x29
        data_3165350 = sub_4f5220(esi, "6cost_3c_line2")
        int32_t var_8_84 = 0xffffffff
    
    if ((data_3165378.d & 0x400) == 0)
        data_3165378.d |= 0x400
        int32_t var_8_85 = 0x2a
        data_316534c = sub_4f5220(esi, "6cost_3c_line3")
        int32_t var_8_86 = 0xffffffff
    
    if ((data_3165378.d & 0x800) == 0)
        data_3165378.d |= 0x800
        int32_t var_8_87 = 0x2b
        data_3165348 = sub_4f5220(esi, "6cost_3d_line1")
        int32_t var_8_88 = 0xffffffff
    
    if ((data_3165378.d & 0x1000) == 0)
        data_3165378.d |= 0x1000
        int32_t var_8_89 = 0x2c
        data_3165344 = sub_4f5220(esi, "6cost_3d_line2")
        int32_t var_8_90 = 0xffffffff
    
    if ((data_3165378.d & 0x2000) == 0)
        data_3165378.d |= 0x2000
        int32_t var_8_91 = 0x2d
        data_3165340 = sub_4f5220(esi, "6cost_3d_line3")
        int32_t var_8_92 = 0xffffffff
    
    if ((data_3165378.d & 0x4000) == 0)
        data_3165378.d |= 0x4000
        int32_t var_8_93 = 0x2e
        data_316533c = sub_4f5220(esi, "6cost_3e_line1")
        int32_t var_8_94 = 0xffffffff
    
    if ((data_3165378.d & 0x8000) == 0)
        data_3165378.d |= 0x8000
        int32_t var_8_95 = 0x2f
        data_3165338 = sub_4f5220(esi, "6cost_3e_line2")
        int32_t var_8_96 = 0xffffffff
    
    if ((data_3165378.d & 0x10000) == 0)
        data_3165378.d |= 0x10000
        int32_t var_8_97 = 0x30
        data_3165334 = sub_4f5220(esi, "6cost_3e_line3")
        int32_t var_8_98 = 0xffffffff
    
    if ((data_3165378.d & 0x20000) == 0)
        data_3165378.d |= 0x20000
        int32_t var_8_99 = 0x31
        data_3165330 = sub_4f5220(esi, "6cost_4a_line1")
        int32_t var_8_100 = 0xffffffff
    
    if ((data_3165378.d & 0x40000) == 0)
        data_3165378.d |= 0x40000
        int32_t var_8_101 = 0x32
        data_316532c = sub_4f5220(esi, "6cost_4a_line2")
        int32_t var_8_102 = 0xffffffff
    
    if ((data_3165378.d & 0x80000) == 0)
        data_3165378.d |= 0x80000
        int32_t var_8_103 = 0x33
        data_3165328 = sub_4f5220(esi, "6cost_4a_line3")
        int32_t var_8_104 = 0xffffffff
    
    if ((data_3165378.d & 0x100000) == 0)
        data_3165378.d |= 0x100000
        int32_t var_8_105 = 0x34
        data_3165324 = sub_4f5220(esi, "6cost_4a_line3b")
        int32_t var_8_106 = 0xffffffff
    
    if ((data_3165378.d & 0x200000) == 0)
        data_3165378.d |= 0x200000
        int32_t var_8_107 = 0x35
        data_3165320 = sub_4f5220(esi, "6cost_4a_line4")
        int32_t var_8_108 = 0xffffffff
    
    if ((data_3165378.d & &__dos_header) == 0)
        data_3165378.d |= &__dos_header
        int32_t var_8_109 = 0x36
        data_316531c = sub_4f5220(esi, "6cost_4b_line1")
        int32_t var_8_110 = 0xffffffff
    
    if ((data_3165378.d & &data_800000) == 0)
        data_3165378.d |= &data_800000
        int32_t var_8_111 = 0x37
        data_3165318 = sub_4f5220(esi, "6cost_4b_line2")
        int32_t var_8_112 = 0xffffffff
    
    if ((data_3165378.d & 0x1000000) == 0)
        data_3165378.d |= 0x1000000
        int32_t var_8_113 = 0x38
        data_3165314 = sub_4f5220(esi, "6cost_4b_line3")
        int32_t var_8_114 = 0xffffffff
    
    if ((data_3165378.d & 0x2000000) == 0)
        data_3165378.d |= 0x2000000
        int32_t var_8_115 = 0x39
        data_3165310 = sub_4f5220(esi, "6cost_4b_line4")
        int32_t var_8_116 = 0xffffffff
    
    if ((data_3165378.d & 0x4000000) == 0)
        data_3165378.d |= 0x4000000
        int32_t var_8_117 = 0x3a
        data_316530c = sub_4f5220(esi, "6cost_4c_line1")
        int32_t var_8_118 = 0xffffffff
    
    if ((data_3165378.d & 0x8000000) == 0)
        data_3165378.d |= 0x8000000
        int32_t var_8_119 = 0x3b
        data_3165308 = sub_4f5220(esi, "6cost_4c_line2")
        int32_t var_8_120 = 0xffffffff
    
    if ((data_3165378.d & 0x10000000) == 0)
        data_3165378.d |= 0x10000000
        int32_t var_8_121 = 0x3c
        data_3165304 = sub_4f5220(esi, "6cost_4c_line3")
        int32_t var_8_122 = 0xffffffff
    
    if ((data_3165378.d & 0x20000000) == 0)
        data_3165378.d |= 0x20000000
        int32_t var_8_123 = 0x3d
        data_3165300 = sub_4f5220(esi, "6cost_4c_line4")
        int32_t var_8_124 = 0xffffffff
    
    if ((data_3165378.d & 0x40000000) == 0)
        data_3165378.d |= 0x40000000
        int32_t var_8_125 = 0x3e
        data_31652fc = sub_4f5220(esi, "6cost_4d_line1")
        int32_t var_8_126 = 0xffffffff
    
    if ((data_3165378.d & 0x80000000) == 0)
        data_3165378.d |= 0x80000000
        int32_t var_8_127 = 0x3f
        data_31652f8 = sub_4f5220(esi, "6cost_4d_line2")
        int32_t var_8_128 = 0xffffffff
    
    if ((data_31652f4 & 1) == 0)
        data_31652f4.d |= 1
        int32_t var_8_129 = 0x40
        data_31652f0 = sub_4f5220(esi, "6cost_4d_line3")
        int32_t var_8_130 = 0xffffffff
    
    if ((data_31652f4 & 2) == 0)
        data_31652f4.d |= 2
        int32_t var_8_131 = 0x41
        data_31652ec = sub_4f5220(esi, "6cost_4d_line4")
        int32_t var_8_132 = 0xffffffff
    
    if ((data_31652f4 & 4) == 0)
        data_31652f4.d |= 4
        int32_t var_8_133 = 0x42
        data_31652e8 = sub_4f5220(esi, "special_1a_line1")
        int32_t var_8_134 = 0xffffffff
    
    if ((data_31652f4 & 8) == 0)
        data_31652f4.d |= 8
        int32_t var_8_135 = 0x43
        data_31652e4 = sub_4f5220(esi, "special_1b_line1")
        int32_t var_8_136 = 0xffffffff
    
    if ((data_31652f4 & 0x10) == 0)
        data_31652f4.d |= 0x10
        int32_t var_8_137 = 0x44
        data_31652e0 = sub_4f5220(esi, "special_1c_line1")
        int32_t var_8_138 = 0xffffffff
    
    if ((data_31652f4 & 0x20) == 0)
        data_31652f4.d |= 0x20
        int32_t var_8_139 = 0x45
        data_31652dc = sub_4f5220(esi, "special_1d_line1")
        int32_t var_8_140 = 0xffffffff
    
    if ((data_31652f4 & 0x40) == 0)
        data_31652f4.d |= 0x40
        int32_t var_8_141 = 0x46
        data_31652d8 = sub_4f5220(esi, "special_1e_line1")
        int32_t var_8_142 = 0xffffffff
    
    int32_t* entry_ebx
    entry_ebx[3] = 0xffffffff
    entry_ebx[2] = 0xffffffff
    entry_ebx[1] = 0xffffffff
    *entry_ebx = 0xffffffff
    
    if (arg1 u> 0x15)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1b1e, "LayoutStyleLookup")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_85
    int32_t ecx_24
    
    switch (arg1)
        case 0
            int32_t edx = data_31653a4
            *arg2 = data_31653f8
            int32_t eax_76 = data_31653a0
            *entry_ebx = edx
            entry_ebx[1] = eax_76
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_76
        case 1
            int32_t eax_77 = data_316539c
            *arg2 = data_31653f4
            *entry_ebx = eax_77
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_77
        case 2
            int32_t eax_78 = data_3165398
            *arg2 = data_31653f0
            int32_t ecx_7 = data_3165394
            *entry_ebx = eax_78
            entry_ebx[1] = ecx_7
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_78
        case 3
            int32_t ecx_10 = data_3165390
            *arg2 = data_31653ec
            int32_t edx_4 = data_316538c
            *entry_ebx = ecx_10
            entry_ebx[1] = edx_4
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
        case 4
            int32_t edx_5 = data_3165388
            *arg2 = data_31653e8
            int32_t eax_81 = data_3165384
            *entry_ebx = edx_5
            entry_ebx[1] = eax_81
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_81
        case 5
            int32_t eax_82 = data_3165380
            *arg2 = data_31653e4
            int32_t ecx_17 = data_316537c
            *entry_ebx = eax_82
            entry_ebx[1] = ecx_17
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_82
        case 6
            int32_t ecx_20 = data_3165374
            *arg2 = data_31653e0
            int32_t edx_8 = data_3165370
            *entry_ebx = ecx_20
            entry_ebx[1] = edx_8
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
        case 7
            int32_t edx_9 = data_316536c
            *arg2 = data_31653dc
            eax_85 = data_3165368
            ecx_24 = data_3165364
            *entry_ebx = edx_9
        label_428ab4:
            entry_ebx[2] = ecx_24
            entry_ebx[1] = eax_85
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_85
        case 8
            int32_t ecx_27 = data_3165360
            *arg2 = data_31653d8
            int32_t edx_11 = data_316535c
            int32_t eax_87 = data_3165358
            *entry_ebx = ecx_27
            entry_ebx[1] = edx_11
            entry_ebx[2] = eax_87
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_87
        case 9
            int32_t eax_88 = data_3165354
            *arg2 = data_31653d4
            int32_t ecx_31 = data_3165350
            int32_t edx_13 = data_316534c
            *entry_ebx = eax_88
            entry_ebx[1] = ecx_31
            entry_ebx[2] = edx_13
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_88
        case 0xa
            int32_t edx_14 = data_3165348
            *arg2 = data_31653d0
            eax_85 = data_3165344
            ecx_24 = data_3165340
            *entry_ebx = edx_14
            goto label_428ab4
        case 0xb
            int32_t ecx_35 = data_316533c
            *arg2 = data_31653cc
            int32_t edx_16 = data_3165338
            int32_t eax_91 = data_3165334
            *entry_ebx = ecx_35
            entry_ebx[1] = edx_16
            entry_ebx[2] = eax_91
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_91
        case 0xc
            int32_t eax_92 = data_3165330
            *arg2 = data_31653c8
            int32_t ecx_39 = data_316532c
            int32_t edx_18 = data_3165328
            *entry_ebx = eax_92
            int32_t eax_93 = data_3165320
            entry_ebx[1] = ecx_39
            entry_ebx[2] = edx_18
            entry_ebx[3] = eax_93
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_93
        case 0xd
            int32_t eax_94 = data_3165330
            *arg2 = data_31653c8
            int32_t ecx_43 = data_316532c
            int32_t edx_20 = data_3165324
            *entry_ebx = eax_94
            int32_t eax_95 = data_3165320
            entry_ebx[1] = ecx_43
            entry_ebx[2] = edx_20
            entry_ebx[3] = eax_95
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_95
        case 0xe
            int32_t eax_96 = data_316531c
            *arg2 = data_31653c4
            int32_t ecx_47 = data_3165318
            int32_t edx_22 = data_3165314
            *entry_ebx = eax_96
            int32_t eax_97 = data_3165310
            entry_ebx[1] = ecx_47
            entry_ebx[2] = edx_22
            entry_ebx[3] = eax_97
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_97
        case 0xf
            int32_t eax_98 = data_316530c
            *arg2 = data_31653c0
            int32_t ecx_51 = data_3165308
            int32_t edx_24 = data_3165304
            *entry_ebx = eax_98
            int32_t eax_99 = data_3165300
            entry_ebx[1] = ecx_51
            entry_ebx[2] = edx_24
            entry_ebx[3] = eax_99
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_99
        case 0x10
            int32_t eax_100 = data_31652fc
            *arg2 = data_31653bc
            int32_t ecx_55 = data_31652f8
            int32_t edx_26 = data_31652f0
            *entry_ebx = eax_100
            int32_t eax_101 = data_31652ec
            entry_ebx[1] = ecx_55
            entry_ebx[2] = edx_26
            entry_ebx[3] = eax_101
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_101
        case 0x11
            int32_t eax_102 = data_31652e8
            *arg2 = data_31653b8
            *entry_ebx = eax_102
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_102
        case 0x12
            int32_t eax_103 = data_31652e4
            *arg2 = data_31653b4
            *entry_ebx = eax_103
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_103
        case 0x13
            int32_t eax_104 = data_31652e0
            *arg2 = data_31653b0
            *entry_ebx = eax_104
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_104
        case 0x14
            int32_t eax_105 = data_31652dc
            *arg2 = data_31653ac
            *entry_ebx = eax_105
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_105
        case 0x15
            int32_t eax_106 = data_31652d8
            *arg2 = data_31653a8
            *entry_ebx = eax_106
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_106
}
