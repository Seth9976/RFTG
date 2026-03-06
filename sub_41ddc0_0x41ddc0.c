// 函数名称: sub_41ddc0
// 虚拟地址: 0x41ddc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41ddc0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_699313
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_27e7a40 + 0x548) != 0)
        sub_4c5870("gCClient->rftgClientData == NULL", &data_83f3d3, "..\code\RFTGClient.cpp", 0xbf4, 
            "RFTGClientInit")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t edx = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (edx.b + 4) s>= 0x45850)
            esi_1 = esi + edx * 0x14
            break
        
        edx += 1
        
        if (edx s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    int128_t* esi_2
    
    if (esi_1[4] != 0xffffffff)
        if (*esi_1 == 0)
            sub_4f4170(esi_1)
        
        int128_t* edi_1 = *esi_1
        *esi_1 = *edi_1
        sub_5abfc0(edi_1, 0, 0x45850)
        esi_2 = edi_1
    else
        esi_2 = sub_4cce80(0x45850)
        sub_5abfc0(esi_2, 0, 0x45850)
    
    int128_t* var_14 = esi_2
    int128_t* var_18 = esi_2
    int32_t var_8_1 = 0
    void* const eax_7
    
    if (esi_2 == 0)
        eax_7 = nullptr
    else
        eax_7 = sub_41e560(esi_2)
    
    int32_t var_8_2 = 0xffffffff
    void* ecx_3 = data_27e7a40
    *(ecx_3 + 0x548) = eax_7
    *(eax_7 + 0xbfac) = 0
    *(*(ecx_3 + 0x548) + 0xbfb0) = 0xffffffff
    *(*(ecx_3 + 0x548) + 0x2c0ac) = 0xffffffff
    sub_41e6a0()
    
    if ((data_3166954 & 1) == 0)
        data_3166954.d |= 1
        int32_t var_8_3 = 1
        data_3166950 = sub_4f5220(data_307c530, "tblGamblingButtons")
        int32_t var_8_4 = 0xffffffff
    
    if ((data_3166954 & 2) == 0)
        data_3166954.d |= 2
        int32_t var_8_5 = 2
        data_316694c = sub_4f5220(data_307c530, "rgn_phases")
        int32_t var_8_6 = 0xffffffff
    
    if ((data_3166954 & 4) == 0)
        data_3166954.d |= 4
        int32_t var_8_7 = 3
        data_316115c = sub_4f5220(data_307c530, "btn_ZoomMilitary")
        int32_t var_8_8 = 0xffffffff
    
    if ((data_3166954 & 8) == 0)
        data_3166954.d |= 8
        int32_t var_8_9 = 4
        data_3166948 = sub_4f5220(data_307c530, "imgRoleGlow")
        int32_t var_8_10 = 0xffffffff
    
    if ((data_3166954 & 0x10) == 0)
        data_3166954.d |= 0x10
        int32_t var_8_11 = 5
        data_3166944 = sub_4f5220(data_307c530, "img_EmpireGlow")
        int32_t var_8_12 = 0xffffffff
    
    int32_t* ebx = *(data_27e7a40 + 0x548)
    int32_t eax_16
    int80_t st0
    st0, eax_16 = sub_4f6f00(data_307c530)
    *ebx = eax_16
    void* eax_17 = sub_4fc3d0(&data_be1cb8, eax_16)
    int32_t edi_2 = data_3166950
    *(eax_17 + 0x2c) = sub_419540
    int128_t* eax_19 = sub_4f6e90(edi_2, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edi_4 = data_316694c
    *(eax_19 + 0x11c) = sub_41cc40
    int128_t* eax_21 = sub_4f6e90(edi_4, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edi_6 = data_316115c
    *(eax_21 + 0x11c) = ___std_atomic_wait_indirect@24
    sub_4f6e90(edi_6, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)[2].b = 1
    int128_t* eax_25 = sub_4f6e90(data_3166948, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    int32_t edi_10 = data_3166944
    *(eax_25 + 0x13c) = *eax_25 + 1
    eax_25[0x14].d = sub_459370
    int128_t* eax_27 = sub_4f6e90(edi_10, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    *(eax_27 + 0x13c) = *eax_27 + 1
    eax_27[0x14].d = sub_4596e0
    sub_4191b0()
    int32_t eax_28
    int80_t st0_1
    st0_1, eax_28 = sub_4f6f00(data_307c790)
    ebx[2] = eax_28
    
    if ((data_3166954 & 0x20) == 0)
        data_3166954.d |= 0x20
        int32_t var_8_13 = 6
        data_3166940 = sub_4f5220(data_307c794, "tblPlayers")
        int32_t var_8_14 = 0xffffffff
    
    int32_t eax_30
    int80_t st0_2
    st0_2, eax_30 = sub_4f6f00(data_307c794)
    ebx[1] = eax_30
    void* eax_31 = sub_4fc3d0(&data_be1cb8, eax_30)
    int32_t edi_12 = data_3166940
    *(eax_31 + 0x2c) = sub_41c780
    int128_t* eax_33 = sub_4f6e90(edi_12, sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
    int32_t* ecx_12 = data_307c500
    *(eax_33 + 0x11c) = sub_41c6a0
    int32_t eax_34
    int80_t st0_3
    st0_3, eax_34 = sub_4f6f00(ecx_12)
    ebx[3] = eax_34
    *(sub_4fc3d0(&data_be1cb8, eax_34) + 0x2c) = sub_41b350
    
    if ((data_3166954 & 0x40) == 0)
        data_3166954.d |= 0x40
        int32_t var_8_15 = 7
        data_316693c = sub_4f5220(data_307c500, "tblItems")
        int32_t var_8_16 = 0xffffffff
    
    int128_t* eax_39 = sub_4f6e90(data_316693c, sub_4fc3d0(&data_be1cb8, ebx[3]), &data_83f3d3)
    int32_t* ecx_13 = data_307c16c
    *(eax_39 + 0x11c) = sub_41cd70
    int32_t eax_40
    int80_t st0_4
    st0_4, eax_40 = sub_4f6f00(ecx_13)
    int32_t* ecx_14 = data_307c72c
    ebx[4] = eax_40
    int32_t eax_41
    int80_t st0_5
    st0_5, eax_41 = sub_4f6f00(ecx_14)
    int32_t* ecx_15 = data_307c75c
    ebx[0x15] = eax_41
    int32_t eax_42
    int80_t st0_6
    st0_6, eax_42 = sub_4f6f00(ecx_15)
    int32_t* ecx_16 = data_307c760
    ebx[0x17] = eax_42
    int32_t eax_43
    int80_t st0_7
    st0_7, eax_43 = sub_4f6f00(ecx_16)
    int32_t* ecx_17 = data_307c544
    ebx[0x18] = eax_43
    int32_t eax_44
    int80_t st0_8
    st0_8, eax_44 = sub_4f6f00(ecx_17)
    int32_t* ecx_18 = data_307c6f4
    ebx[0x2c] = eax_44
    int32_t eax_45
    int80_t st0_9
    st0_9, eax_45 = sub_4f6f00(ecx_18)
    int32_t* ecx_19 = data_307c6f8
    ebx[0x2d] = eax_45
    int32_t eax_46
    int80_t st0_10
    st0_10, eax_46 = sub_4f6f00(ecx_19)
    int32_t* ecx_20 = data_307c108
    ebx[0x2e] = eax_46
    int32_t eax_47
    int80_t st0_11
    st0_11, eax_47 = sub_4f6f00(ecx_20)
    int32_t* ecx_21 = data_307c1c8
    ebx[0x2f] = eax_47
    int32_t eax_48
    char edx_7
    int80_t st0_12
    st0_12, eax_48, edx_7 = sub_4f6f00(ecx_21)
    int16_t top = 0xfff3
    ebx[0x16] = eax_48
    
    if ((data_3166954 & 0x80) == 0)
        data_3166954.d |= 0x80
        int32_t var_8_17 = 8
        int32_t eax_49
        eax_49, edx_7 = sub_4f5220(data_307c1c8, "card1")
        data_3166938 = eax_49
        int32_t var_8_18 = 0xffffffff
    
    if ((data_3166954.d & 0x100) == 0)
        data_3166954.d |= 0x100
        int32_t var_8_19 = 9
        int32_t eax_50
        eax_50, edx_7 = sub_4f5220(data_307c1c8, "card2")
        data_3166934 = eax_50
        int32_t var_8_20 = 0xffffffff
    
    int32_t var_30 = 1
    char edx_9 = sub_4fa4e0(ebx[0x16], data_3166938, edx_7)
    int32_t var_38_2 = 1
    sub_4fa4e0(ebx[0x16], data_3166934, edx_9)
    int32_t* eax_54 = data_307c110
    ebx[0x30] = eax_54
    ebx[0x31] = sub_4f5220(eax_54, "btnAction")
    int32_t* eax_56 = data_307c110
    ebx[0x37] = eax_56
    ebx[0x38] = sub_4f5220(eax_56, "btnAuto")
    int32_t* eax_58 = data_307c110
    ebx[0x3e] = eax_58
    ebx[0x3f] = sub_4f5220(eax_58, "btnNovelty")
    int32_t* eax_60 = data_307c110
    ebx[0x45] = eax_60
    ebx[0x46] = sub_4f5220(eax_60, "btnRare")
    int32_t* eax_62 = data_307c110
    ebx[0x4c] = eax_62
    ebx[0x4d] = sub_4f5220(eax_62, "btnGenes")
    int32_t* eax_64 = data_307c110
    ebx[0x53] = eax_64
    ebx[0x54] = sub_4f5220(eax_64, "btnAlien")
    int32_t* eax_66 = data_307c110
    ebx[0x5a] = eax_66
    ebx[0x5b] = sub_4f5220(eax_66, "btnCards")
    int32_t i = 0
    void* ebx_1 = &ebx[0x19]
    
    do
        int32_t eax_70
        int32_t ecx_25
        eax_70, ecx_25 = sub_4f6f00(sub_41da40(i))
        unimplemented  {call 0x4f6f00}
        unimplemented  {fldz }
        int32_t var_30_1 = ecx_25
        float var_30_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        *ebx_1 = eax_70
        sub_4fa8a0(eax_70, 1, var_30_2)
        top -= 2
        unimplemented  {call 0x4fa8a0}
        i += 1
        ebx_1 += 4
    while (i s< 0x13)
    
    void* edi_17 = data_27e7a40
    
    for (int32_t i_1 = 0; i_1 s< 0x438; i_1 += 0xb4)
        int32_t eax_71 = __execvp(0x4000, 0x10)
        
        if (eax_71 == 0)
            sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *(*(edi_17 + 0x548) + i_1 + 0x43a3c) = eax_71
    
    void* esi_20 = *(edi_17 + 0x548)
    
    if (*(esi_20 + 0x43960) != 0)
        sub_4c5870("mpBlock == NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0xa7, 
            "DataArray<struct RFTGGfx>::DataArrayInitialize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_74 = sub_4cce80(0x2c000)
    void* ecx_26 = data_27e7a40
    *(esi_20 + 0x43960) = eax_74
    *(esi_20 + 0x43968) = 0x400
    *(esi_20 + 0x43978) = "gfxs"
    *(esi_20 + 0x43974) = 0xdbd4
    void* result = *(ecx_26 + 0x548)
    *(result + 0x45844) = result + 0x4397c
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
