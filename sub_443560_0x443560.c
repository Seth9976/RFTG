// 函数名称: sub_443560
// 虚拟地址: 0x443560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_443560(int32_t arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691ccc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_7c
    int32_t eax_2 = __security_cookie ^ &var_7c
    int32_t __saved_edi
    int32_t var_8c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_5 = data_3165698
    
    if ((eax_5.b & 1) == 0)
        int32_t ecx_1 = data_307c6f8
        eax_5 |= 1
        data_3165698 = eax_5
        data_3165694 = ecx_1
    
    if ((eax_5.b & 2) == 0)
        data_3165698 = eax_5 | 2
        int32_t var_c_1 = 0
        data_3165690 = sub_4f5220(data_3165694, "CloseBtn")
        int32_t var_c_2 = 0xffffffff
        eax_5 = data_3165698
    
    if (arg1 != data_3165690)
        if ((eax_5.b & 4) == 0)
            data_3165698 = eax_5 | 4
            int32_t var_c_3 = 1
            int32_t eax_13 = sub_4f5220(data_3165694, "btn_devmil")
            int32_t* ecx_7 = data_3165694
            data_315fbd4 = eax_13
            int32_t eax_14 = sub_4f5220(ecx_7, "btn_halomil")
            int32_t* edx_2 = data_3165694
            data_315fbd8 = eax_14
            data_315fbdc = sub_4f5220(edx_2, "btn_haloreg")
            int32_t eax_17 = sub_4f5220(data_3165694, "btn_genes")
            int32_t* ecx_8 = data_3165694
            data_315fbe0 = eax_17
            int32_t eax_18 = sub_4f5220(ecx_8, "btn_alien")
            int32_t* edx_3 = data_3165694
            data_315fbe4 = eax_18
            data_315fbe8 = sub_4f5220(edx_3, "btn_consume")
            int32_t eax_21 = sub_4f5220(data_3165694, "btn_fivemil")
            int32_t* ecx_9 = data_3165694
            data_315fbec = eax_21
            int32_t eax_22 = sub_4f5220(ecx_9, "btn_sixdev")
            int32_t* edx_4 = data_3165694
            data_315fbf0 = eax_22
            data_315fbf4 = sub_4f5220(edx_4, "btn_takeover")
            int32_t var_c_4 = 0xffffffff
        
        int32_t edi_1 = 0
        
        while (arg1 != (&data_315fbd4)[edi_1])
            edi_1 += 1
            
            if (edi_1 s>= 9)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x4096, "SearchDlgClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        void* eax_26 = sub_46b2b0(*(data_27e7a40 + 0x74))
        void* ecx_10 = data_27e7a40
        *(eax_26 + 0x1f8c) = edi_1
        void* esi_3 = *(ecx_10 + 0x548)
        
        if (*(esi_3 + 0x2c078) == 1 && *(esi_3 + 0x210) == 0)
            sub_4d6480(data_307bef0)
            void var_4c
            sub_4d66f0(&var_4c)
        
        *(esi_3 + 0x210) = 0
        *(esi_3 + 0x2c078) = 0
        *(esi_3 + 0x214) = 1
    else
        void* eax_9 = sub_46b2b0(*(data_27e7a40 + 0x74))
        void* ecx_2 = data_27e7a40
        *(eax_9 + 0x1f90) = 1
        void* esi_1 = *(ecx_2 + 0x548)
        
        if (*(esi_1 + 0x2c078) == 1 && *(esi_1 + 0x210) == 0)
            sub_4d6480(data_307bef0)
            sub_4d66f0(&var_7c)
        
        *(esi_1 + 0x210) = 5
        *(esi_1 + 0x2c078) = 0
        *(esi_1 + 0x214) = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_7c)
    return 0
}
