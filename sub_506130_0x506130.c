// 函数名称: sub_506130
// 虚拟地址: 0x506130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_506130(struct _EXCEPTION_REGISTRATION_RECORD** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_4 = arg3
    int32_t var_4 = arg3
    int32_t* entry_ebx
    
    if (arg1 == 0x2e)
        int32_t eax = entry_ebx[1]
        
        if (eax == entry_ebx[3])
            sub_505cf0(entry_ebx, eax)
            entry_ebx[2] = fconvert.s(float.t(0))
            struct _EXCEPTION_REGISTRATION_RECORD** eax_2
            eax_2.b = 1
            return eax_2
        
        sub_505be0(entry_ebx)
        entry_ebx[2] = fconvert.s(float.t(0))
        void* eax_1
        eax_1.b = 1
        return eax_1
    
    if (arg1 == 8)
        int32_t esi_1 = entry_ebx[1]
        
        if (esi_1 == entry_ebx[3])
            if (esi_1 s> 0)
                int32_t eax_4 = sub_5060a0(esi_1, entry_ebx)
                entry_ebx[1] = eax_4
                entry_ebx[3] = eax_4
                sub_505cf0(entry_ebx, eax_4)
            
            arg1.b = 1
            entry_ebx[2] = fconvert.s(float.t(0))
            return arg1
        
        sub_505be0(entry_ebx)
        entry_ebx[2] = fconvert.s(float.t(0))
        void* eax_3
        eax_3.b = 1
        return eax_3
    
    if (arg1 == 0x24)
        if (arg3 != 1)
            entry_ebx[3] = 0
            entry_ebx[2] = fconvert.s(float.t(0))
            entry_ebx[1] = 0
            int32_t eax_5
            eax_5.b = 1
            return 1
        
        entry_ebx[1] = 0
        entry_ebx[2] = fconvert.s(float.t(0))
        arg1.b = arg3.b
        return arg1
    
    if (arg1 == 0x23)
        if (arg3 != 1)
            int32_t eax_8 = sub_4c4930(entry_ebx)
            entry_ebx[3] = eax_8
            entry_ebx[2] = fconvert.s(float.t(0))
            entry_ebx[1] = eax_8
            eax_8.b = 1
            return eax_8
        
        entry_ebx[1] = sub_4c4930(entry_ebx)
        entry_ebx[2] = fconvert.s(float.t(0))
        int32_t eax_7
        eax_7.b = 1
        return eax_7
    
    if (arg1 == 0x25)
        int32_t esi_2 = entry_ebx[1]
        
        if ((arg3.b & 1) == 0)
            arg1 = entry_ebx[3]
            
            if (arg1 != esi_2)
                if (arg1 s>= esi_2)
                    entry_ebx[3] = esi_2
                    entry_ebx[2] = fconvert.s(float.t(0))
                    entry_ebx[1] = esi_2
                    int32_t eax_10
                    eax_10.b = 1
                    return eax_10
                
                entry_ebx[3] = arg1
                entry_ebx[1] = arg1
            else if (esi_2 s> 0)
                arg1 = sub_5060a0(esi_2, entry_ebx)
                entry_ebx[3] = arg1
                entry_ebx[1] = arg1
        else if (esi_2 s> 0)
            entry_ebx[1] = sub_5060a0(esi_2, entry_ebx)
            entry_ebx[2] = fconvert.s(float.t(0))
            int32_t eax_9
            eax_9.b = 1
            return eax_9
        
        arg1.b = 1
        entry_ebx[2] = fconvert.s(float.t(0))
        return arg1
    
    if (arg1 != 0x27)
        if (arg1 != 0x41 || arg3 != 2)
            arg1.b = 0
            return arg1
        
        sub_505fd0(entry_ebx)
        int32_t eax_16
        eax_16.b = 1
        return eax_16
    
    int32_t eax_12
    
    if ((arg3.b & 1) == 0)
        eax_12 = entry_ebx[3]
        int32_t ecx_15 = entry_ebx[1]
        
        if (eax_12 == ecx_15)
            if (ecx_15 s< sub_4c4930(entry_ebx))
                eax_12 = sub_506000(entry_ebx, ecx_15)
                entry_ebx[3] = eax_12
                entry_ebx[1] = eax_12
        else
            if (eax_12 s<= ecx_15)
                entry_ebx[3] = ecx_15
                entry_ebx[2] = fconvert.s(float.t(0))
                entry_ebx[1] = ecx_15
                int32_t eax_14
                eax_14.b = 1
                return eax_14
            
            entry_ebx[3] = eax_12
            entry_ebx[1] = eax_12
    else
        int32_t edi_4 = entry_ebx[1]
        
        if (edi_4 != sub_4c4930(entry_ebx))
            entry_ebx[1] = sub_506000(entry_ebx, edi_4)
            entry_ebx[2] = fconvert.s(float.t(0))
            int32_t eax_13
            eax_13.b = 1
            return eax_13
    
    eax_12.b = 1
    entry_ebx[2] = fconvert.s(float.t(0))
    return eax_12
}
