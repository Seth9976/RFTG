// 函数名称: sub_41c780
// 虚拟地址: 0x41c780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_41c780(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698f16
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_24
    int32_t eax_2 = __security_cookie ^ &var_24
    int32_t __saved_edi
    int32_t eax_4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char edx
    
    if ((data_3166888 & 1) == 0)
        data_3166888.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_6
        eax_6, edx = sub_4f5220(data_307c794, "BtnBackMulti")
        data_3166884 = eax_6
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3166888 & 2) == 0)
        data_3166888.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_7
        eax_7, edx = sub_4f5220(data_307c794, "BtnBack")
        data_3166880 = eax_7
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3166888 & 4) == 0)
        data_3166888.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_8
        eax_8, edx = sub_4f5220(data_307c794, "BtnRematch")
        data_316687c = eax_8
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3166888 & 8) == 0)
        data_3166888.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_10
        eax_10, edx = sub_4f5220(data_307c794, "CloseBtn")
        data_3166878 = eax_10
        int32_t var_c_8 = 0xffffffff
    
    void* esi = data_27e7a40
    
    if (arg1 != data_3166878)
        if (*(esi + 0x2c4960) == 1)
            void* eax_11 = data_27e7a54
            *(eax_11 + 0x20c) -= 1
            sub_408a40()
            int32_t var_38_1 = 0
            edx = sub_41bb40()
            esi = data_27e7a40
        
        if (*(esi + 0x2c4960) == 2)
            sub_408a40()
            int32_t var_38_2 = 0
            edx = sub_41bb40()
            esi = data_27e7a40
    
    if (arg1 == data_316687c)
        int32_t eax_12 = *(esi + 0x2c4960)
        
        if (eax_12 == 1)
            if (sub_419400(&var_24) != 0)
                void* eax_14 = data_27e7a54
                *(eax_14 + 0x204) += 1
                
                if (*(eax_14 + 0x204) s>= 3)
                    data_27c0720 = 0
                    *(eax_14 + 0x204) = 0
                
                data_27c0770 = 0
                data_27c076c = 0
                sub_408a40()
                esi = data_27e7a40
            
            int32_t eax_15
            int32_t ecx_2
            eax_15, ecx_2 = sub_4c95c0()
            data_27c075c = eax_15
            data_27c0640 = 0xffffffff
            data_27c0778 = 0
            data_27c077c = 0
            data_27c0670 = 0xffffffff
            data_27c55a0 = 0
            data_27c55a4 = 0
            data_27c06a0 = 0xffffffff
            data_27ca3c8 = 0
            data_27ca3cc = 0
            data_27c06d0 = 0xffffffff
            data_27cf1f0 = 0
            data_27cf1f4 = 0
            int32_t* esi_2 = *(esi + 0x548) + 0x45848
            
            if (*esi_2 != 0)
                eax_15 = sub_406d90(esi_2)
            
            var_24 = 0
            int32_t var_20_1 = 1
            edx = sub_42dd70(eax_15, &var_24, ecx_2, &var_24, 1, 0, eax_4)
            esi = data_27e7a40
        else if (eax_12 == 2)
            uint32_t eax_17 = *(esi + 0x2c495c) * 0x1f8
            sub_4c75d0(eax_17, eax_17 + esi + 0xcac, *(esi + 0x28), 4, 0xf4266, eax_17 + esi + 0xcac)
            void* eax_18 = data_27e7a40
            int32_t edx_5 = *(eax_18 + 0x2c495c) * 0x1f8
            sub_4c75d0(edx_5 + eax_18 + 0xcac, edx_5, *(eax_18 + 0x28), 4, 0xf4265, 
                edx_5 + eax_18 + 0xcac)
            edx = sub_405420(data_27e7a40 + 0x2c495c)
            esi = data_27e7a40
    else if (arg1 == data_3166884)
        int32_t eax_22 = *(esi + 0x2c4960)
        
        if (eax_22 == 2)
        label_41cb5a:
            int32_t edx_7 = *(esi + 0x2c495c) * 0x1f8
            sub_4c75d0(edx_7 + esi + 0xcac, edx_7, *(esi + 0x28), 4, 0xf4265, edx_7 + esi + 0xcac)
            edx = sub_405420(data_27e7a40 + 0x2c495c)
            esi = data_27e7a40
            *(esi + 0x528) = 1
        else
            if (eax_22 != 4)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x9b5, 
                    "WinScreenButtonClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            *(esi + 0x528) = 1
    else if (arg1 == data_3166880)
        int32_t eax_24 = *(esi + 0x2c4960)
        
        if (eax_24 == 1)
            if (sub_419400(&var_24) != 0)
                void* eax_26 = data_27e7a54
                *(eax_26 + 0x204) += 1
                
                if (*(eax_26 + 0x204) s>= 3)
                    *(eax_26 + 0x204) = 0
                
                sub_408a40()
                esi = data_27e7a40
            
            if (*(esi + 0x2c4960) != 1)
                sub_4c5870("gCClient->activeGame.gameType == GAME_LOCAL", &data_83f3d3, 
                    "..\code\RFTGClient.cpp", 0x9c7, "WinScreenButtonClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_28 = data_27e7a54
            *(eax_28 + 0x20c) -= 1
            edx = sub_408a40()
            data_27c060c = 0
            esi = data_27e7a40
            *(esi + 0x528) = 1
        else if (eax_24 == 2)
            goto label_41cb5a
    
    if (*(data_27e7fd0 + 0x27) == 0)
        bool cond:0_1 = (data_3165fac & 4) != 0
        void* esi_3 = *(esi + 0x548)
        int32_t edi_1 = *(esi_3 + 4)
        int32_t ebx_1 = *(esi_3 + 8)
        *(esi_3 + 0x2c079) = 0
        
        if (not(cond:0_1))
            data_3165fac.d |= 4
            int32_t var_c_9 = 6
            int32_t eax_32
            eax_32, edx = sub_4f5220(data_307c794, "animDlg")
            data_3165fa0 = eax_32
            int32_t var_c_10 = 0xffffffff
        
        int32_t var_38_7 = 1
        sub_4fa4e0(edi_1, data_3165fa0, edx)
        sub_4fa8a0(ebx_1, 1, fconvert.s(float.t(0)))
    else
        data_30d6f38 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_24)
    return 0
}
