// 函数名称: sub_4d4ab0
// 虚拟地址: 0x4d4ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d4ab0()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int32_t* ecx = *(entry_ebx + 0x2c)
    
    if (ecx != 0)
        sub_5169a0(ecx)
    
    int32_t* i = *(entry_ebx + 0x38)
    
    while (i != 0)
        int32_t* i_1 = i
        i = i[4]
        float var_24
        sub_4d46b0(&var_24, entry_ebx, *i_1, &var_24)
        
        if (i_1[2] == 2)
            void* eax_4 = data_27e7fcc
            int32_t esi_1 = i_1[3]
            
            if (eax_4 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_5 = *(eax_4 + 4)
            
            if (esi_1 == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct Structure>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t ecx_3 = zx.d(esi_1.w)
            int32_t edx_2
            
            if (ecx_3 u< eax_5[1])
                edx_2 = *eax_5
            
            if (ecx_3 u>= eax_5[1] || *(ecx_3 * 0x6c + edx_2 + 0x68) != esi_1)
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct Structure>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* ecx_5 = ecx_3 * 0x6c + edx_2
            int32_t var_10
            *(ecx_5 + 8) = var_10
            int32_t var_c
            *(ecx_5 + 0xc) = var_c
            int32_t var_8
            *(ecx_5 + 0x10) = var_8
            int32_t var_20
            *(ecx_5 + 0x14) = var_20
            int32_t var_1c
            *(ecx_5 + 0x18) = var_1c
            void* var_18
            *(ecx_5 + 0x1c) = var_18
            int32_t var_14
            *(ecx_5 + 0x20) = var_14
        else
            sub_4c5680("Unknown attachment type")
}
