// 函数名称: sub_55cb80
// 虚拟地址: 0x55cb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_55cb80(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t esi
    int32_t var_8 = esi
    int32_t** esi_1 = arg1
    int32_t edi
    int32_t var_c = edi
    int32_t* esp_1 = &var_c
    int32_t* edi_1
    
    if (esi_1 != 0)
        char eax_2 = sub_5618d0(esi_1)
        int32_t** var_10 = esi_1
        
        if (eax_2 == 0)
            int32_t* eax_4 = sub_50ba10(var_10)
            void* ecx_2 = *eax_4
            var_10 = &arg1
            int32_t var_14_1 = 0
            int32_t* var_18 = eax_4
            esp_1 = &var_18
            
            if ((*(ecx_2 + 0x48))(var_18, var_14_1, var_10) s< 0)
                char const* const var_1c = "Dx9TextureGetSurface"
                int32_t var_20 = 0x97d
                char const* const var_24 = "Windows\WindowsGraphics.cpp"
                char* const var_28 = &data_83f3d3
                char const* const var_2c = "SUCCEEDED(hr)"
                sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x97d, 
                    "Dx9TextureGetSurface")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            int32_t** eax_3 = sub_50ba10(var_10)
            arg1 = eax_3
            int32_t edx_1 = (*eax_3)[1]
            var_10 = eax_3
            esp_1 = &var_10
            edx_1(var_10)
        
        edi_1 = arg1
    else
        edi_1 = nullptr
    
    int32_t* arg_8
    int32_t* esi_2 = arg_8
    
    if (esi_2 != 0)
        char eax_9 = sub_5618d0(esi_2)
        *(esp_1 - 4) = esi_2
        
        if (eax_9 == 0)
            int32_t* eax_14 = sub_50ba10()
            void* ecx_7 = *eax_14
            *(esp_1 - 4) = &arg_8
            *(esp_1 - 8) = 0
            *(esp_1 - 0xc) = eax_14
            esp_1 -= 0xc
            
            if ((*(ecx_7 + 0x48))() s< 0)
                *(esp_1 - 4) = "Dx9TextureGetSurface"
                *(esp_1 - 8) = 0x97d
                *(esp_1 - 0xc) = "Windows\WindowsGraphics.cpp"
                *(esp_1 - 0x10) = &data_83f3d3
                *(esp_1 - 0x14) = "SUCCEEDED(hr)"
                sub_4c5870()
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        else
            int32_t* eax_10 = sub_50ba10()
            arg_8 = eax_10
            int32_t edx_2 = *(*eax_10 + 4)
            *(esp_1 - 4) = eax_10
            esp_1 -= 4
            edx_2()
        
        esi_2 = arg_8
    
    int32_t* eax_11 = *(data_3079200 + 8)
    void* edx_3 = *eax_11
    *(esp_1 - 4) = 2
    *(esp_1 - 8) = 0
    *(esp_1 - 0xc) = esi_2
    *(esp_1 - 0x10) = 0
    *(esp_1 - 0x14) = edi_1
    *(esp_1 - 0x18) = eax_11
    (*(edx_3 + 0x88))()
    int32_t edx_4 = *(*edi_1 + 8)
    *(esp_1 - 0x1c) = edi_1
    edx_4()
    int32_t ecx_6 = *(*esi_2 + 8)
    *(esp_1 - 0x20) = esi_2
    int32_t result = ecx_6()
    *(esp_1 - 0x20)
    *(esp_1 - 0x1c)
    *(esp_1 - 0x18)
    return result
}
