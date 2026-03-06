// 函数名称: sub_47de10
// 虚拟地址: 0x47de10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_47de10(int32_t arg1)
{
    // 第一条实际指令: int32_t* var_8
    int32_t* var_8
    int32_t* ebx
    
    if (data_307d960 == 1)
        data_307d964 = data_307d920
    label_47de40:
        int32_t* ecx_3 = **(data_26a44b4 + data_307d968 * 0x10)
        var_8 = ecx_3
        ebx = ecx_3
    else
        if (data_307d8cc == 1)
            goto label_47de40
        
        ebx = data_307c69c
        var_8 = ebx
    
    if (arg1 == sub_4f5220(ebx, "btnBack"))
        if (data_307d8cc == 0)
            int32_t eax_5 = *(data_27e7a40 + 0x2c4960)
            int32_t eax_6 = neg.d(eax_5)
            data_30d6f38 = not.d(sbb.d(eax_6, eax_6, eax_5 != 0)) & data_307c76c
            return 0
        
        data_307d8cc = 0
        return 0
    
    int32_t esi
    int32_t edi
    
    switch (data_307d964)
        case 0
            esi = 0
            edi = 0xa
        label_47dee7:
            int32_t eax_12 = sub_4f5220(ebx, "btnArrowR")
            int32_t eax_13 = sub_4f5220(var_8, "btnArrowL")
            int32_t eax_15
            
            if (arg1 == eax_12)
                eax_15 = data_307d968 + 1
                
                if (eax_15 s< esi)
                    data_307d968 = esi
                    return 0
                
            label_47df12:
                
                if (eax_15 s> edi)
                    eax_15 = edi
                
                data_307d968 = eax_15
            else if (arg1 == eax_13)
                eax_15 = data_307d968 - 1
                
                if (eax_15 s>= esi)
                    goto label_47df12
                
                data_307d968 = esi
            return 0
        case 2
            esi = 0xb
            edi = 0xb
            goto label_47dee7
        case 3
            esi = 0xc
            edi = 0xd
            goto label_47dee7
        case 4
            esi = 0xe
            edi = 0xf
            goto label_47dee7
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RulesDlg.cpp", 0x64, "GetExpansionRulesPages")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
