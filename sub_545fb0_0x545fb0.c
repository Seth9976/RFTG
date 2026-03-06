// 函数名称: sub_545fb0
// 虚拟地址: 0x545fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_545fb0(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char edx = *(arg1 + 0x13c)
    char edx = *(arg1 + 0x13c)
    void* esi = data_307882c
    void* edi = arg1 + 0x14
    void* var_14
    
    if (edx != 0)
        int32_t eax = *(arg1 + 0xdc)
        
        if (eax s< 0 || eax s>= 0x11)
            var_14 = "OpenGLBindOrCreateVAO"
            sub_4c5870(
                "vertexBufferData->mBufferFormat >= 0 && vertexBufferData->mBufferFormat < 
                    VERTEX_FORMAT_COUNT", 
                &data_83f3d3, "OpenGLGraphics.cpp", 0x7a5, var_14)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        edi = eax * 0xc0 + esi + 0x4370
    
    int32_t i = 0
    void* eax_3 = edi + 4
    void* edi_1 = edi
    
    do
        if (edx == 0 || arg3 == 0)
            if (*eax_3 == arg2 && *(eax_3 + 4) == arg3)
                void* eax_12 = *(eax_3 - 4)
                
                if (*(esi + 0x408c) != eax_12)
                    var_14 = eax_12
                    *(esi + 0x408c) = eax_12
                    data_3079e24(var_14)
                    eax_12 = data_27e7fe4
                    *(eax_12 + 0x10) += 1
                
                eax_12.b = 1
                return eax_12
        else if (*eax_3 == arg2)
            void* eax_4 = *(eax_3 - 4)
            
            if (*(esi + 0x408c) != eax_4)
                var_14 = eax_4
                *(esi + 0x408c) = eax_4
                data_3079e24(var_14)
                void* eax_5 = data_27e7fe4
                *(eax_5 + 0x10) += 1
                esi = data_307882c
            
            var_14 = *sub_54b850(esi + 0x4240, arg3)
            data_307943c(0x8893, var_14)
            int32_t eax_8
            eax_8.b = 1
            return eax_8
        
        i += 1
        eax_3 += 0xc
    while (i s< 0x10)
    
    int32_t eax_10 = 0
    
    while (true)
        void* eax_11
        void** esp
        void* __saved_edi
        
        if (*edi_1 == 0)
            var_14 = edi_1
            data_3079e2c(1, var_14)
            esp = &__saved_edi
            eax_11 = *edi_1
            
            if (eax_11 == 0)
                break
            
            *(edi_1 + 4) = arg2
            void* ecx_2 = data_307882c
            *(edi_1 + 8) = arg3
            
            if (*(ecx_2 + 0x408c) != eax_11)
                *(ecx_2 + 0x408c) = eax_11
                var_14 = eax_11
                esp = &var_14
            label_5460db:
                data_3079e24()
                eax_11 = data_27e7fe4
                *(eax_11 + 0x10) += 1
        else
            eax_10 += 1
            edi_1 += 0xc
            
            if (eax_10 s< 0x10)
                continue
            else
                var_14 = "Ran out of VAO slots!"
                sub_4c5680(var_14)
                eax_11 = data_307882c
                esp = &__saved_edi
                
                if (*(eax_11 + 0x408c) != 0)
                    *(eax_11 + 0x408c) = 0
                    var_14 = nullptr
                    esp = &var_14
                    goto label_5460db
        *esp
        esp[1]
        eax_11.b = 0
        esp[2]
        esp[3]
        return eax_11
    
    var_14 = "OpenGLBindOrCreateVAO"
    sub_4c5870("entry->mVertexArrayHandle != 0", &data_83f3d3, "OpenGLGraphics.cpp", 0x7cc, var_14)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
