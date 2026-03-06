// 函数名称: sub_4383a0
// 虚拟地址: 0x4383a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4383a0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    int32_t edi = entry_ebx[1]
    
    if (edi != 0xffffffff)
        sub_46b360(edi)
    
    int32_t eax = entry_ebx[1]
    int32_t eax_21
    int32_t ecx_3
    int32_t edx_2
    int32_t edi_1
    
    switch (*entry_ebx)
        case 0, 1, 2, 7, 0xb, 0x13, 0x1d, 0x1e, 0x1f, 0x25, 0x26
            int32_t edx_15 = data_315fba4
            *arg1 = 0xffffffff
            arg1[1] = 1
            data_315fba4 = edx_15 + 1
            arg1[2] = edx_15
            return arg1
        case 3
            eax_21 = entry_ebx[3]
        label_4385a1:
            void* eax_22 = sub_418870(eax_21)
            int32_t edx_25 = *(eax_22 + 0x68)
            int32_t eax_23 = *(eax_22 + 0x6c)
            *arg1 = *(eax_22 + 0x64)
            arg1[1] = edx_25
            arg1[2] = eax_23
            return arg1
        case 4
            edx_2 = data_315fba4
            ecx_3 = 3
            edi_1 = edx_2
            
            if (eax != 0)
                goto label_438413
            
            *arg1 = eax
            arg1[1] = 3
            data_315fba4 = edx_2 + 1
            arg1[2] = edi_1
            return arg1
        case 5, 0x15
            int32_t edx_26 = data_315fba4
            *arg1 = eax
            arg1[1] = 3
            data_315fba4 = edx_26 + 1
            arg1[2] = edx_26
            return arg1
        case 6
            edx_2 = data_315fba4
            ecx_3 = 0x14
            edi_1 = edx_2
        label_438413:
            *arg1 = eax
            arg1[1] = ecx_3
            data_315fba4 = edx_2 + 1
            arg1[2] = edi_1
            return arg1
        case 8
            int32_t edx_17 = data_315fba4
            *arg1 = eax
            arg1[1] = 4
            data_315fba4 = edx_17 + 1
            arg1[2] = edx_17
            return arg1
        case 9
            void* eax_29 = sub_418870(entry_ebx[5])
            int32_t eax_30 = *(eax_29 + 0x6c)
            *arg1 = *(eax_29 + 0x64)
            arg1[2] = eax_30
            arg1[1] = 5
            return arg1
        case 0xa, 0x17, 0x18, 0x23
            int32_t edx_13 = data_315fba4
            *arg1 = eax
            arg1[1] = 2
            data_315fba4 = edx_13 + 1
            arg1[2] = edx_13
            return arg1
        case 0xc
            eax = 0xffffffff
        label_43860b:
            int32_t edx_29 = data_315fba4
            *arg1 = eax
            arg1[1] = 0x16
            data_315fba4 = edx_29 + 1
            arg1[2] = edx_29
            return arg1
        case 0xd, 0xf, 0x10
            goto label_43860b
        case 0x11, 0x14
            void* eax_5 = sub_418870(entry_ebx[9])
            int32_t eax_6 = *(eax_5 + 0x6c)
            *arg1 = *(eax_5 + 0x64)
            arg1[2] = eax_6
            arg1[1] = 0x17
            return arg1
        case 0x12
            void* eax_2 = sub_418870(entry_ebx[9])
            *arg1 = *(eax_2 + 0x64)
            arg1[2] = *(eax_2 + 0x6c)
            arg1[1] = 0x18
            return arg1
        case 0x16
            eax_21 = entry_ebx[5]
            goto label_4385a1
        case 0x19
            int32_t edx_4 = data_315fba4
            
            if (eax != 0)
                *arg1 = eax
                arg1[1] = 9
                data_315fba4 = edx_4 + 1
                arg1[2] = edx_4
                return arg1
            
            *arg1 = eax
            arg1[1] = 0x1c
            data_315fba4 = edx_4 + 1
            arg1[2] = edx_4
            return arg1
        case 0x1a
            int32_t edx_10 = data_315fba4
            
            if (eax != 0)
                *arg1 = 0xffffffff
                arg1[1] = 0xa
                data_315fba4 = edx_10 + 1
                arg1[2] = edx_10
                return arg1
            
            *arg1 = eax
            arg1[1] = 0x1b
            data_315fba4 = edx_10 + 1
            arg1[2] = edx_10
            return arg1
        case 0x20
            int32_t edx_21 = data_315fba4
            *arg1 = eax
            arg1[1] = 0xc
            data_315fba4 = edx_21 + 1
            arg1[2] = edx_21
            return arg1
        case 0x21
            int32_t edx_23 = data_315fba4
            *arg1 = eax
            arg1[1] = 0xd
            data_315fba4 = edx_23 + 1
            arg1[2] = edx_23
            return arg1
        case 0x22
            int32_t edx_19 = data_315fba4
            *arg1 = eax
            arg1[1] = 0xb
            data_315fba4 = edx_19 + 1
            arg1[2] = edx_19
            return arg1
        case 0x24
            int32_t edx_7 = data_315fba4
            
            if (eax != 0)
                *arg1 = eax
                arg1[1] = 8
                data_315fba4 = edx_7 + 1
                arg1[2] = edx_7
                return arg1
            
            *arg1 = eax
            arg1[1] = 0xf
            data_315fba4 = edx_7 + 1
            arg1[2] = edx_7
            return arg1
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2fb9, "GetEndLocation")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
