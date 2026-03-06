// 函数名称: sub_5d0a30
// 虚拟地址: 0x5d0a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5d0a30(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    
    if (arg1[0xc].b == 0)
        void* eax = arg1[0xa]
        
        if (eax != 0)
            int32_t** esp_1
            int32_t* var_c
            
            if (*(eax + 0xc4e) == 0)
                int32_t* eax_1 = *eax
                int32_t edx_1 = *(*eax_1 + 0x64)
                var_c = eax_1
                int32_t eax_2 = edx_1(var_c)
                void* var_10
                
                if (eax_2 == 0x8007001e || eax_2 == 0x8007000c)
                    int32_t* eax_4 = *arg1[0xa]
                    int32_t edx_2 = *(*eax_4 + 0x1c)
                    var_10 = eax_4
                    edx_2(var_10)
                    void* eax_6 = *arg1[0xa]
                    int32_t edx_3 = *(*eax_6 + 0x64)
                    var_10 = eax_6
                    edx_3(var_10)
                
                bool cond:0_1 = *(arg1[0xa] + 0x30) == 0
                var_10 = arg1
                esp_1 = &var_10
                
                if (cond:0_1)
                    sub_5d06e0(var_10)
                else
                    sub_5d08e0(var_10)
            else
                var_c = arg1
                esp_1 = &var_c
                sub_5cfac0(var_c)
            esp = &esp_1[1]
            
            if (*(arg1[0xa] + 0xc4c) != 0)
                arg1[0xc].w = 0x101
    
    *esp
    esp[1]
}
